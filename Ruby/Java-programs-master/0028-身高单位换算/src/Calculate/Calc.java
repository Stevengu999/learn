package Calculate;

import java.util.Scanner;

public class Calc {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int foot = 0;
		int inch = 0;
		System.out.println("��ӭ��������ٵ��ĵ�λ�������");
		System.out.println("������Ӣ�Ƶ�λ��������ߣ�������硣");
		Scanner in = new Scanner(System.in);
		
		while (true){
			foot = in.nextInt();
			inch = in.nextInt();
			if ( foot >= 0 && inch >= 0 && inch <= 12 ){
				System.out.println("���ĵ�λΪ��"+((foot+(inch/12.00))*30.48)+"����");
				System.out.println("\nthanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n");
				break;
			}else{
				System.out.println("���꣡����һ�����������ֲ����𣡣�");
			}
		}
	}
}
