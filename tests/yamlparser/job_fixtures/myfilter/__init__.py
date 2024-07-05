#!/usr/bin/env python3

"""
Example custom jinja2 filter
"""

import jinja2


@jinja2.pass_environment
def do_my_filter(env, data, skip_list_wrap=False):
    return 'my_filter says "{}"'.format(data)


FILTERS = {
    "my_filter": do_my_filter,
}
