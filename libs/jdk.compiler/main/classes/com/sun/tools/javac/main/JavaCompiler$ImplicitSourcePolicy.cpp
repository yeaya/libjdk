#include <com/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef NONE
#undef UNSET

using $JavaCompiler$ImplicitSourcePolicyArray = $Array<::com::sun::tools::javac::main::JavaCompiler$ImplicitSourcePolicy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::NONE = nullptr;
JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::CLASS = nullptr;
JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::UNSET = nullptr;
$JavaCompiler$ImplicitSourcePolicyArray* JavaCompiler$ImplicitSourcePolicy::$VALUES = nullptr;

$JavaCompiler$ImplicitSourcePolicyArray* JavaCompiler$ImplicitSourcePolicy::$values() {
	$init(JavaCompiler$ImplicitSourcePolicy);
	return $new($JavaCompiler$ImplicitSourcePolicyArray, {
		JavaCompiler$ImplicitSourcePolicy::NONE,
		JavaCompiler$ImplicitSourcePolicy::CLASS,
		JavaCompiler$ImplicitSourcePolicy::UNSET
	});
}

$JavaCompiler$ImplicitSourcePolicyArray* JavaCompiler$ImplicitSourcePolicy::values() {
	$init(JavaCompiler$ImplicitSourcePolicy);
	return $cast($JavaCompiler$ImplicitSourcePolicyArray, JavaCompiler$ImplicitSourcePolicy::$VALUES->clone());
}

JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::valueOf($String* name) {
	$init(JavaCompiler$ImplicitSourcePolicy);
	return $cast(JavaCompiler$ImplicitSourcePolicy, $Enum::valueOf(JavaCompiler$ImplicitSourcePolicy::class$, name));
}

void JavaCompiler$ImplicitSourcePolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

JavaCompiler$ImplicitSourcePolicy* JavaCompiler$ImplicitSourcePolicy::decode($String* option) {
	$init(JavaCompiler$ImplicitSourcePolicy);
	if (option == nullptr) {
		return JavaCompiler$ImplicitSourcePolicy::UNSET;
	} else if (option->equals("none"_s)) {
		return JavaCompiler$ImplicitSourcePolicy::NONE;
	} else if (option->equals("class"_s)) {
		return JavaCompiler$ImplicitSourcePolicy::CLASS;
	} else {
		return JavaCompiler$ImplicitSourcePolicy::UNSET;
	}
}

void JavaCompiler$ImplicitSourcePolicy::clinit$($Class* clazz) {
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::NONE, $new(JavaCompiler$ImplicitSourcePolicy, "NONE"_s, 0));
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::CLASS, $new(JavaCompiler$ImplicitSourcePolicy, "CLASS"_s, 1));
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::UNSET, $new(JavaCompiler$ImplicitSourcePolicy, "UNSET"_s, 2));
	$assignStatic(JavaCompiler$ImplicitSourcePolicy::$VALUES, JavaCompiler$ImplicitSourcePolicy::$values());
}

JavaCompiler$ImplicitSourcePolicy::JavaCompiler$ImplicitSourcePolicy() {
}

$Class* JavaCompiler$ImplicitSourcePolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONE", "Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$ImplicitSourcePolicy, NONE)},
		{"CLASS", "Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$ImplicitSourcePolicy, CLASS)},
		{"UNSET", "Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavaCompiler$ImplicitSourcePolicy, UNSET)},
		{"$VALUES", "[Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavaCompiler$ImplicitSourcePolicy, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavaCompiler$ImplicitSourcePolicy, $values, $JavaCompiler$ImplicitSourcePolicyArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(JavaCompiler$ImplicitSourcePolicy, init$, void, $String*, int32_t)},
		{"decode", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $STATIC, $staticMethod(JavaCompiler$ImplicitSourcePolicy, decode, JavaCompiler$ImplicitSourcePolicy*, $String*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavaCompiler$ImplicitSourcePolicy, valueOf, JavaCompiler$ImplicitSourcePolicy*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;", nullptr, $PUBLIC | $STATIC, $staticMethod(JavaCompiler$ImplicitSourcePolicy, values, $JavaCompiler$ImplicitSourcePolicyArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.JavaCompiler$ImplicitSourcePolicy", "com.sun.tools.javac.main.JavaCompiler", "ImplicitSourcePolicy", $PROTECTED | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.JavaCompiler$ImplicitSourcePolicy",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/main/JavaCompiler$ImplicitSourcePolicy;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.JavaCompiler"
	};
	$loadClass(JavaCompiler$ImplicitSourcePolicy, name, initialize, &classInfo$$, JavaCompiler$ImplicitSourcePolicy::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavaCompiler$ImplicitSourcePolicy));
	});
	return class$;
}

$Class* JavaCompiler$ImplicitSourcePolicy::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com