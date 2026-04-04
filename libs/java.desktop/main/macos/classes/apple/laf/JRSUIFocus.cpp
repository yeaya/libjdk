#include <apple/laf/JRSUIFocus.h>
#include <jcpp.h>

#undef NULL_CG_REF
#undef NULL_PTR
#undef RING_ABOVE
#undef RING_BELOW
#undef RING_ONLY
#undef SUCCESS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace apple {
	namespace laf {

int32_t JRSUIFocus::beginNativeFocus(int64_t cgContext, int32_t ringStyle) {
	$init(JRSUIFocus);
	$prepareNativeStatic(beginNativeFocus, int32_t, int64_t cgContext, int32_t ringStyle);
	int32_t $ret = $invokeNativeStatic(cgContext, ringStyle);
	$finishNativeStatic();
	return $ret;
}

int32_t JRSUIFocus::endNativeFocus(int64_t cgContext) {
	$init(JRSUIFocus);
	$prepareNativeStatic(endNativeFocus, int32_t, int64_t cgContext);
	int32_t $ret = $invokeNativeStatic(cgContext);
	$finishNativeStatic();
	return $ret;
}

void JRSUIFocus::init$(int64_t cgContext) {
	this->cgContext = cgContext;
}

void JRSUIFocus::beginFocus(int32_t ringStyle) {
	testForFailure(beginNativeFocus(this->cgContext, ringStyle));
}

void JRSUIFocus::endFocus() {
	testForFailure(endNativeFocus(this->cgContext));
}

void JRSUIFocus::testForFailure(int32_t status) {
	$useLocalObjectStack();
	if (status == JRSUIFocus::SUCCESS) {
		return;
	}
	switch (status) {
	case JRSUIFocus::NULL_PTR:
		$throwNew($RuntimeException, "Null pointer exception in native JRSUI"_s);
	case JRSUIFocus::NULL_CG_REF:
		$throwNew($RuntimeException, "Null CG reference in native JRSUI"_s);
	default:
		$throwNew($RuntimeException, $$str({"JRSUI draw focus problem: "_s, $$str(status)}));
	}
}

JRSUIFocus::JRSUIFocus() {
}

$Class* JRSUIFocus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SUCCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIFocus, SUCCESS)},
		{"NULL_PTR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIFocus, NULL_PTR)},
		{"NULL_CG_REF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIFocus, NULL_CG_REF)},
		{"RING_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRSUIFocus, RING_ONLY)},
		{"RING_ABOVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRSUIFocus, RING_ABOVE)},
		{"RING_BELOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JRSUIFocus, RING_BELOW)},
		{"cgContext", "J", nullptr, $FINAL, $field(JRSUIFocus, cgContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(JRSUIFocus, init$, void, int64_t)},
		{"beginFocus", "(I)V", nullptr, $PUBLIC, $virtualMethod(JRSUIFocus, beginFocus, void, int32_t)},
		{"beginNativeFocus", "(JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(JRSUIFocus, beginNativeFocus, int32_t, int64_t, int32_t)},
		{"endFocus", "()V", nullptr, $PUBLIC, $virtualMethod(JRSUIFocus, endFocus, void)},
		{"endNativeFocus", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(JRSUIFocus, endNativeFocus, int32_t, int64_t)},
		{"testForFailure", "(I)V", nullptr, $STATIC, $staticMethod(JRSUIFocus, testForFailure, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"apple.laf.JRSUIFocus",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JRSUIFocus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRSUIFocus);
	});
	return class$;
}

$Class* JRSUIFocus::class$ = nullptr;

	} // laf
} // apple