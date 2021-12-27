// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

using System;

namespace PSeInt {
	class ordenar_enteros_if {

		static void Main(string[] args) {
			string a;
			string b;
			string c;
			Console.WriteLine("Ingrese un número entero: ");
			a = Console.ReadLine();
			Console.WriteLine("Ingrese un número entero: ");
			b = Console.ReadLine();
			Console.WriteLine("Ingrese un número entero: ");
			c = Console.ReadLine();
			// números distintos
			if ((a>b && b>c)) {
				Console.WriteLine(a+" "+b+" "+c);
				Console.WriteLine(c+" "+b+" "+a);
			}
			if ((b>a && a>c)) {
				Console.WriteLine(b+" "+a+" "+c);
				Console.WriteLine(c+" "+a+" "+a);
			}
			if ((c>a && a>b)) {
				Console.WriteLine(c+" "+a+" "+b);
				Console.WriteLine(b+" "+a+" "+c);
			}
			if ((c>a && b>a)) {
				Console.WriteLine(c+" "+b+" "+a);
				Console.WriteLine(a+" "+b+" "+c);
			}
			if ((b>a && c>a)) {
				Console.WriteLine(b+" "+c+" "+a);
				Console.WriteLine(a+" "+c+" "+b);
			}
			if ((a>b && c>b)) {
				Console.WriteLine(a+" "+c+" "+b);
				Console.WriteLine(b+" "+c+" "+a);
			}
			// Tres números iguales:
			if ((a==b && a==c)) {
				Console.WriteLine(a+" "+b+" "+c);
				Console.WriteLine(a+" "+b+" "+c);
			}
		}

	}

}

