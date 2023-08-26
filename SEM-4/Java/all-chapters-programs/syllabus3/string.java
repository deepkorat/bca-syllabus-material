class stringdemo
{
	public static void main(String[] args) {
		byte c[] = {'h','e','l','l','o'};
		String s = new String(c);
		String str = new String("world");
		System.out.println(c);
		System.out.println(s);
		System.out.println(str);

		String str1 = s + " "  + str;
		System.out.println(str1);

		String f = "som lalit";
		String h = "institute";

		System.out.println(f.length());
		System.out.println(str.length());
		System.out.println(str.toUpperCase());
		System.out.println(f.toLowerCase());
		boolean res = f.equals(h);

		

	}

}