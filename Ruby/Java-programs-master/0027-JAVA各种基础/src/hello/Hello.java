package hello;

import java.util.Scanner;

public class Hello {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a = 0;
		System.out.println("echo:������һ�仰�������ظ��㡣");
		Scanner in = new Scanner(System.in);
		System.out.println("echo:"+in.nextLine());
		System.out.println("echo:�������ҽ�Ϊ����һ���򵥵����㡣����100-�����������\necho:�����롣");
		a = in.nextInt();
		System.out.println("100-"+a+"="+(100-a));
		System.out.println("\nthanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n");
	}

}