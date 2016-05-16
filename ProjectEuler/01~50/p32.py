import itertools

number = ['1', '2', '3', '4', '5', '6', '7', '8', '9']


def cmb_a_to_z(tpl):
    string = ""
    for w in tpl:
        string = string + w

    return string

combinations = list(itertools.permutations(number))

lst1x4 = []
lst2x3 = []

for tpl in combinations:

    lst1x4.append(
        [cmb_a_to_z(tpl[0]), cmb_a_to_z(tpl[1:5]), cmb_a_to_z(tpl[5:])])

    lst2x3.append(
        [cmb_a_to_z(tpl[0:2]), cmb_a_to_z(tpl[2:5]), cmb_a_to_z(tpl[5:])])


ans_tpl = []


for lst in lst1x4:

    if int(lst[0]) * int(lst[1]) == int(lst[2]):
        ans_tpl.append(int(lst[2]))


for lst in lst2x3:

    if int(lst[0]) * int(lst[1]) == int(lst[2]):
        ans_tpl.append(int(lst[2]))

ans = 0

ans_tpl = set(ans_tpl)

print(ans_tpl)

for n in ans_tpl:
    ans += n

print(ans)

