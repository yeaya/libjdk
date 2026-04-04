#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Operators.h>
#include <jcpp.h>

#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT
#undef NE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$StringArray* Operators::names = nullptr;
$ints* Operators::swapOpArray = nullptr;

void Operators::init$() {
}

$String* Operators::getOpNames(int32_t operator$) {
	$init(Operators);
	return Operators::names->get(operator$);
}

int32_t Operators::swapOp(int32_t operator$) {
	$init(Operators);
	return Operators::swapOpArray->get(operator$);
}

void Operators::clinit$($Class* clazz) {
	$assignStatic(Operators::names, $new($StringArray, {
		"="_s,
		"!="_s,
		">"_s,
		"<"_s,
		">="_s,
		"<="_s
	}));
	$assignStatic(Operators::swapOpArray, $new($ints, {
		Operators::EQ,
		Operators::NE,
		Operators::LT,
		Operators::GT,
		Operators::LE,
		Operators::GE
	}));
}

Operators::Operators() {
}

$Class* Operators::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Operators, EQ)},
		{"NE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Operators, NE)},
		{"GT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Operators, GT)},
		{"LT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Operators, LT)},
		{"GE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Operators, GE)},
		{"LE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Operators, LE)},
		{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Operators, names)},
		{"swapOpArray", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Operators, swapOpArray)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Operators, init$, void)},
		{"getOpNames", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Operators, getOpNames, $String*, int32_t)},
		{"swapOp", "(I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Operators, swapOp, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.Operators",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Operators, name, initialize, &classInfo$$, Operators::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Operators);
	});
	return class$;
}

$Class* Operators::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com