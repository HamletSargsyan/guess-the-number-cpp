# guess-the-number-cpp

## Установка

```bash
# Установка через curl
curl -LJO $(curl -s https://api.github.com/repos/HamletSargsyan/guess-the-number-cpp/releases/latest | grep "tarball_url" | cut -d '"' -f 4)

# Установка через wget
wget $(wget -qO- https://api.github.com/repos/HamletSargsyan/guess-the-number-cpp/releases/latest | grep "tarball_url" | cut -d '"' -f 4)

tar -zxvf guess-the-number-cpp-*.tar.gz

cd guess-the-number-cpp-*
chmod +x ./build.sh

./build.sh

./build/guess-the-number-cpp
```

## Использованные библиотеки

- [Termcolor](https://github.com/ikalnytskyi/termcolor)
- [GRand](https://github.com/ggchappell/GRand)

## Лицензия

Лицензировано по лицензии [MIT](https://github.com/HamletSargsyan/guess-the-number-cpp/blob/main/LICENSE)
