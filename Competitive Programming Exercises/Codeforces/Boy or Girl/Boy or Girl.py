# -*- coding: utf-8 -*-
# @Author: tanht
# @Date:   2020-08-30 22:09:03
# @Last Modified by:   tanht
# @Last Modified time: 2020-08-30 22:32:26

# Source: https://lerner.co.il/2018/06/08/python-parentheses-primer/

#print(["CHAT WITH HER!", "IGNORE HIM!"][len({*input()})%2])
print(["CHAT WITH HER!", "IGNORE HIM!"][len(set(input()))%2])

# {*input()}: create a set from elements of input()