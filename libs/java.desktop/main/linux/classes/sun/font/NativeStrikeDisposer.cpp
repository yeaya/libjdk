#include <sun/font/NativeStrikeDisposer.h>
#include <sun/font/Font2D.h>
#include <sun/font/FontStrikeDesc.h>
#include <sun/font/FontStrikeDisposer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $FontStrikeDesc = ::sun::font::FontStrikeDesc;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;

namespace sun {
	namespace font {

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $ints* images) {
	$FontStrikeDisposer::init$(font2D, desc, 0, images);
	this->pNativeScalerContext = pContext;
}

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext, $longs* images) {
	$FontStrikeDisposer::init$(font2D, desc, 0, images);
	this->pNativeScalerContext = pContext;
}

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc, int64_t pContext) {
	$FontStrikeDisposer::init$(font2D, desc, 0);
	this->pNativeScalerContext = pContext;
}

void NativeStrikeDisposer::init$($Font2D* font2D, $FontStrikeDesc* desc) {
	$FontStrikeDisposer::init$(font2D, desc);
}

void NativeStrikeDisposer::dispose() {
	$synchronized(this) {
		if (!this->disposed) {
			if (this->pNativeScalerContext != 0) {
				freeNativeScalerContext(this->pNativeScalerContext);
			}
			$FontStrikeDisposer::dispose();
		}
	}
}

void NativeStrikeDisposer::freeNativeScalerContext(int64_t pContext) {
	$prepareNative(freeNativeScalerContext, void, int64_t pContext);
	$invokeNative(pContext);
	$finishNative();
}

NativeStrikeDisposer::NativeStrikeDisposer() {
}

$Class* NativeStrikeDisposer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pNativeScalerContext", "J", nullptr, 0, $field(NativeStrikeDisposer, pNativeScalerContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[I)V", nullptr, $PUBLIC, $method(NativeStrikeDisposer, init$, void, $Font2D*, $FontStrikeDesc*, int64_t, $ints*)},
		{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J[J)V", nullptr, $PUBLIC, $method(NativeStrikeDisposer, init$, void, $Font2D*, $FontStrikeDesc*, int64_t, $longs*)},
		{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;J)V", nullptr, $PUBLIC, $method(NativeStrikeDisposer, init$, void, $Font2D*, $FontStrikeDesc*, int64_t)},
		{"<init>", "(Lsun/font/Font2D;Lsun/font/FontStrikeDesc;)V", nullptr, $PUBLIC, $method(NativeStrikeDisposer, init$, void, $Font2D*, $FontStrikeDesc*)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(NativeStrikeDisposer, dispose, void)},
		{"freeNativeScalerContext", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(NativeStrikeDisposer, freeNativeScalerContext, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.NativeStrikeDisposer",
		"sun.font.FontStrikeDisposer",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NativeStrikeDisposer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NativeStrikeDisposer));
	});
	return class$;
}

$Class* NativeStrikeDisposer::class$ = nullptr;

	} // font
} // sun