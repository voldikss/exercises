- `(S.size() + 1) / 2` vs `S.size() / 2 + 1` （后者出错）

```cpp
if (i.second > (S.size() / 2) + 1)
```

此处应该用前者

![](./1.jpg)

- TODO 感觉可以用递归来做，然后每一步都可以检查上面这个条件，不符合就 `return ""'`
