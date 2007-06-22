char fred[20] = "Hey there";

int main(void) {
	char bob[] = "\x55\x89\xe5\xb8\x05\x00\x00\x00\x5d\xc3";
	int (*run)() = (void *)fred;
	memcpy(fred,bob,10);
	printf("%d %p\n",run(),fred);
	return 0;
}
