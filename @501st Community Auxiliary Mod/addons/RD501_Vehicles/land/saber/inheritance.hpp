#define saber_inheritence_template(class1,class2,class3)\
	class class1 :Wheeled_APC_F\
	{\
		class  Turrets;\
	};\
	class class2 :class1 \
	{\
		class Turrets:Turrets\
		{\
			class MainTurret;	\
		};\
	};\
	class class3:class2 \
	{\
		scope = 2; \
		class Turrets:Turrets\
		{\
			class MainTurret:MainTurret\
			{\
			};\
		};\
	};\


	//Command saber


	class Wheeled_APC_F;

	saber_inheritence_template(O_JM_TX130_base,O_O_JM_TX130_base,O_JM_TX130_1)

	saber_inheritence_template(O_JM_TX130m1_base,O_O_JM_TX130m1_base,O_JM_TX130m1_1)//saber

	saber_inheritence_template(O_JM_TX130m2_base,O_O_JM_TX130m2_base,O_JM_TX130m2_1)//super saber
	

	class O_O_JM_TX130r_base:O_JM_TX130_base
	{
		class Turrets:Turrets
		{
			class MainTurret;
		};
	};
	class O_JM_TX130r_1:O_O_JM_TX130r_base
	{
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{

			};
		};
	};
