package prime;

import java.util.Scanner;

public class Prime {

	public static void main(String[] args) {
		// TODO Auto-generated method stub	
		int aa;
		Scanner in = new Scanner(System.in);
		System.out.printf("��Ҫ���ɶ��ٸ������ı�\n");
		
		aa = in.nextInt();
		
		int[] a = new int[aa];
		int i=2,k;
		int index=0;
		int n;
		boolean is = true;
		
		a[0] = 2;
		
		while ( index < aa )
		{
			is = true;
			k=i;
			for ( n = 0; a[n] <= Math.sqrt(k); n ++ )
			{
				if ( k % a[n] == 0 )
				{
					is = false;
					break;
				}
			}
			if ( is )
			{
				a[index] = i;
				index ++;
				//�����������������ǰ��һ����
			}
			i++;//��ǰ��һ������
		}
		
		n = 0;
		
		for ( int j : a )
		{
			System.out.printf("%d\t",j);
			if ( n % 15 == 14 )
			{
				System.out.printf("\n");
			}
			n++;
		}
		//���������
	System.out.println("\nthanks for using my program.\n\n\n\n                   ����ice1000 ǧ�����\n\n");
	}

}
