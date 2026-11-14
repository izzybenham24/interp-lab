# interp-lab C build. Run from c/:  make | make test | make clean
.RECIPEPREFIX = >
CC     := gcc
CFLAGS := -std=c17 -Wall -Wextra -Werror -g \
          -fsanitize=address,undefined -fno-sanitize-recover=all
BUILD  := build
PROGS  := $(patsubst src/%.c,$(BUILD)/%,$(wildcard src/*.c))
TESTS  := $(patsubst tests/%.c,$(BUILD)/tests/%,$(wildcard tests/test_*.c))

.PHONY: all test clean

all: $(PROGS)

$(BUILD)/%: src/%.c
> @mkdir -p $(BUILD)
> $(CC) $(CFLAGS) $< -o $@

$(BUILD)/tests/%: tests/%.c
> @mkdir -p $(BUILD)/tests
> $(CC) $(CFLAGS) $< -o $@

test: all $(TESTS)
> @for t in $(TESTS); do echo "== $$t"; ./$$t || exit 1; done
> @echo "ALL TESTS PASSED"

clean:
> rm -rf $(BUILD)
