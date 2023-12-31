from progress import *
import requests
import argparse
from git import Repo

repo = Repo('.')

def main(args):
    func_sizes, total_size = get_func_sizes()
    all_funcs = set(func_sizes.keys())

    nonmatching_funcs = get_nonmatching_funcs()
    matching_funcs = all_funcs - nonmatching_funcs

    matching_size, nonmatching_size = get_funcs_sizes(func_sizes, matching_funcs, nonmatching_funcs)

    if len(all_funcs) == 0:
        funcs_matching_ratio = 0.0
        matching_ratio = 0.0
    else:
        funcs_matching_ratio = (len(matching_funcs) / len(all_funcs)) * 100
        matching_ratio = (matching_size / total_size) * 100

    commit = repo.heads.master.commit

    content = {
        "embeds": [{
            "title": f"{commit.message.splitlines()[0]}",
            "description": f"**{len(matching_funcs)}** matched functions / **{len(all_funcs)}** total (**{funcs_matching_ratio:.2f}%**)\n**{matching_size}** matching bytes / **{total_size}** total (**{matching_ratio:.2f}%**)",
            "url": f"https://github.com/sonicdcer/sf64/commit/{commit.hexsha}",
            "color": commit.authored_date & 0xFFFFFF
        }]
    }

    requests.post(args.discord_url, json=content)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Reports progress for the project on Discord")
    parser.add_argument("--discord_url", help="Discord webhook URL", required=True)
    args = parser.parse_args()
    main(args)