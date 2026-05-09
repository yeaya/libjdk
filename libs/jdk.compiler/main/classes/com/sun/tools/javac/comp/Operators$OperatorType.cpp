#include <com/sun/tools/javac/comp/Operators$OperatorType.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Operators.h>
#include <java/io/Serializable.h>
#include <java/lang/Enum.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef OBJECT
#undef SHORT
#undef STRING

using $Operators$OperatorTypeArray = $Array<::com::sun::tools::javac::comp::Operators$OperatorType>;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Operators$OperatorType$$Lambda$lambda$static$0 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$0($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$0::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$1$1 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$1($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$1$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$1$1);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$1$1::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$2$2 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$2($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$2$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$2$2);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$2$2::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$3$3 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$3($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$3$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$3$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$3$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$3$3);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$3$3::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$4$4 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$4($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$4$4, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$4$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$4$4",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$4$4);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$4$4::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$5$5 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$5$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$5($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$5$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$5$5, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$5$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$5$5",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$5$5);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$5$5::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$6$6 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$6$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$6($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$6$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$6$6, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$6$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$6$6",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$6$6);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$6$6::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$7$7 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$7$7, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$7($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$7$7, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$7$7, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$7$7",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$7$7);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$7$7::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$8$8 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$8$8, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$8($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$8$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$8$8, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$8$8, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$8$8",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$8$8);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$8$8::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$9$9 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$9$9, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$9($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$9$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$9$9, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$9$9, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$9$9",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$9$9);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$9$9::class$ = nullptr;

class Operators$OperatorType$$Lambda$lambda$static$10$10 : public $Function {
	$class(Operators$OperatorType$$Lambda$lambda$static$10$10, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* syms) override {
		return $of(Operators$OperatorType::lambda$static$10($cast($Symtab, syms)));
	}
};
$Class* Operators$OperatorType$$Lambda$lambda$static$10$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators$OperatorType$$Lambda$lambda$static$10$10, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Operators$OperatorType$$Lambda$lambda$static$10$10, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$10$10",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Operators$OperatorType$$Lambda$lambda$static$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Operators$OperatorType$$Lambda$lambda$static$10$10);
	});
	return class$;
}
$Class* Operators$OperatorType$$Lambda$lambda$static$10$10::class$ = nullptr;

Operators$OperatorType* Operators$OperatorType::BYTE = nullptr;
Operators$OperatorType* Operators$OperatorType::SHORT = nullptr;
Operators$OperatorType* Operators$OperatorType::INT = nullptr;
Operators$OperatorType* Operators$OperatorType::LONG = nullptr;
Operators$OperatorType* Operators$OperatorType::FLOAT = nullptr;
Operators$OperatorType* Operators$OperatorType::DOUBLE = nullptr;
Operators$OperatorType* Operators$OperatorType::CHAR = nullptr;
Operators$OperatorType* Operators$OperatorType::BOOLEAN = nullptr;
Operators$OperatorType* Operators$OperatorType::OBJECT = nullptr;
Operators$OperatorType* Operators$OperatorType::STRING = nullptr;
Operators$OperatorType* Operators$OperatorType::BOT = nullptr;
$Operators$OperatorTypeArray* Operators$OperatorType::$VALUES = nullptr;

$Operators$OperatorTypeArray* Operators$OperatorType::$values() {
	$init(Operators$OperatorType);
	return $new($Operators$OperatorTypeArray, {
		Operators$OperatorType::BYTE,
		Operators$OperatorType::SHORT,
		Operators$OperatorType::INT,
		Operators$OperatorType::LONG,
		Operators$OperatorType::FLOAT,
		Operators$OperatorType::DOUBLE,
		Operators$OperatorType::CHAR,
		Operators$OperatorType::BOOLEAN,
		Operators$OperatorType::OBJECT,
		Operators$OperatorType::STRING,
		Operators$OperatorType::BOT
	});
}

$Operators$OperatorTypeArray* Operators$OperatorType::values() {
	$init(Operators$OperatorType);
	return $cast($Operators$OperatorTypeArray, Operators$OperatorType::$VALUES->clone());
}

Operators$OperatorType* Operators$OperatorType::valueOf($String* name) {
	$init(Operators$OperatorType);
	return $cast(Operators$OperatorType, $Enum::valueOf(Operators$OperatorType::class$, name));
}

void Operators$OperatorType::init$($String* $enum$name, int32_t $enum$ordinal, $Function* asTypeFunc) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, asTypeFunc, asTypeFunc);
}

$Type* Operators$OperatorType::asType($Symtab* syms) {
	return $cast($Type, $nc(this->asTypeFunc)->apply(syms));
}

$Type* Operators$OperatorType::lambda$static$10($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->botType;
}

$Type* Operators$OperatorType::lambda$static$9($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->stringType;
}

$Type* Operators$OperatorType::lambda$static$8($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->objectType;
}

$Type* Operators$OperatorType::lambda$static$7($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->booleanType;
}

$Type* Operators$OperatorType::lambda$static$6($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->charType;
}

$Type* Operators$OperatorType::lambda$static$5($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->doubleType;
}

$Type* Operators$OperatorType::lambda$static$4($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->floatType;
}

$Type* Operators$OperatorType::lambda$static$3($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->longType;
}

$Type* Operators$OperatorType::lambda$static$2($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->intType;
}

$Type* Operators$OperatorType::lambda$static$1($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->shortType;
}

$Type* Operators$OperatorType::lambda$static$0($Symtab* syms) {
	$init(Operators$OperatorType);
	return $nc(syms)->byteType;
}

void Operators$OperatorType::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Operators$OperatorType::BYTE, $new(Operators$OperatorType, "BYTE"_s, 0, $$new(Operators$OperatorType$$Lambda$lambda$static$0)));
	$assignStatic(Operators$OperatorType::SHORT, $new(Operators$OperatorType, "SHORT"_s, 1, $$new(Operators$OperatorType$$Lambda$lambda$static$1$1)));
	$assignStatic(Operators$OperatorType::INT, $new(Operators$OperatorType, "INT"_s, 2, $$new(Operators$OperatorType$$Lambda$lambda$static$2$2)));
	$assignStatic(Operators$OperatorType::LONG, $new(Operators$OperatorType, "LONG"_s, 3, $$new(Operators$OperatorType$$Lambda$lambda$static$3$3)));
	$assignStatic(Operators$OperatorType::FLOAT, $new(Operators$OperatorType, "FLOAT"_s, 4, $$new(Operators$OperatorType$$Lambda$lambda$static$4$4)));
	$assignStatic(Operators$OperatorType::DOUBLE, $new(Operators$OperatorType, "DOUBLE"_s, 5, $$new(Operators$OperatorType$$Lambda$lambda$static$5$5)));
	$assignStatic(Operators$OperatorType::CHAR, $new(Operators$OperatorType, "CHAR"_s, 6, $$new(Operators$OperatorType$$Lambda$lambda$static$6$6)));
	$assignStatic(Operators$OperatorType::BOOLEAN, $new(Operators$OperatorType, "BOOLEAN"_s, 7, $$new(Operators$OperatorType$$Lambda$lambda$static$7$7)));
	$assignStatic(Operators$OperatorType::OBJECT, $new(Operators$OperatorType, "OBJECT"_s, 8, $$new(Operators$OperatorType$$Lambda$lambda$static$8$8)));
	$assignStatic(Operators$OperatorType::STRING, $new(Operators$OperatorType, "STRING"_s, 9, $$new(Operators$OperatorType$$Lambda$lambda$static$9$9)));
	$assignStatic(Operators$OperatorType::BOT, $new(Operators$OperatorType, "BOT"_s, 10, $$new(Operators$OperatorType$$Lambda$lambda$static$10$10)));
	$assignStatic(Operators$OperatorType::$VALUES, Operators$OperatorType::$values());
}

Operators$OperatorType::Operators$OperatorType() {
}

$Class* Operators$OperatorType::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$0")) {
			return Operators$OperatorType$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$1$1")) {
			return Operators$OperatorType$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$2$2")) {
			return Operators$OperatorType$$Lambda$lambda$static$2$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$3$3")) {
			return Operators$OperatorType$$Lambda$lambda$static$3$3::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$4$4")) {
			return Operators$OperatorType$$Lambda$lambda$static$4$4::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$5$5")) {
			return Operators$OperatorType$$Lambda$lambda$static$5$5::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$6$6")) {
			return Operators$OperatorType$$Lambda$lambda$static$6$6::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$7$7")) {
			return Operators$OperatorType$$Lambda$lambda$static$7$7::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$8$8")) {
			return Operators$OperatorType$$Lambda$lambda$static$8$8::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$9$9")) {
			return Operators$OperatorType$$Lambda$lambda$static$9$9::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Operators$OperatorType$$Lambda$lambda$static$10$10")) {
			return Operators$OperatorType$$Lambda$lambda$static$10$10::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"BYTE", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, BYTE)},
		{"SHORT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, SHORT)},
		{"INT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, INT)},
		{"LONG", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, LONG)},
		{"FLOAT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, FLOAT)},
		{"DOUBLE", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, DOUBLE)},
		{"CHAR", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, CHAR)},
		{"BOOLEAN", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, BOOLEAN)},
		{"OBJECT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, OBJECT)},
		{"STRING", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, STRING)},
		{"BOT", "Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Operators$OperatorType, BOT)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Operators$OperatorType, $VALUES)},
		{"asTypeFunc", "Ljava/util/function/Function;", "Ljava/util/function/Function<Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Type;>;", $FINAL, $field(Operators$OperatorType, asTypeFunc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, $values, $Operators$OperatorTypeArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/util/function/Function;)V", "(Ljava/util/function/Function<Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(Operators$OperatorType, init$, void, $String*, int32_t, $Function*)},
		{"asType", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, 0, $method(Operators$OperatorType, asType, $Type*, $Symtab*)},
		{"lambda$static$0", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$0, $Type*, $Symtab*)},
		{"lambda$static$1", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$1, $Type*, $Symtab*)},
		{"lambda$static$10", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$10, $Type*, $Symtab*)},
		{"lambda$static$2", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$2, $Type*, $Symtab*)},
		{"lambda$static$3", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$3, $Type*, $Symtab*)},
		{"lambda$static$4", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$4, $Type*, $Symtab*)},
		{"lambda$static$5", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$5, $Type*, $Symtab*)},
		{"lambda$static$6", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$6, $Type*, $Symtab*)},
		{"lambda$static$7", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$7, $Type*, $Symtab*)},
		{"lambda$static$8", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$8, $Type*, $Symtab*)},
		{"lambda$static$9", "(Lcom/sun/tools/javac/code/Symtab;)Lcom/sun/tools/javac/code/Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Operators$OperatorType, lambda$static$9, $Type*, $Symtab*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Operators$OperatorType, valueOf, Operators$OperatorType*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/Operators$OperatorType;", nullptr, $PUBLIC | $STATIC, $staticMethod(Operators$OperatorType, values, $Operators$OperatorTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Operators$OperatorType", "com.sun.tools.javac.comp.Operators", "OperatorType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Operators$OperatorType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Operators$OperatorType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Operators"
	};
	$loadClass(Operators$OperatorType, name, initialize, &classInfo$$, Operators$OperatorType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Operators$OperatorType));
	});
	return class$;
}

$Class* Operators$OperatorType::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com