#include <sun/print/PSPrinterJob$GState.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/PathIterator.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

void PSPrinterJob$GState::init$($PSPrinterJob* this$0) {
	$set(this, this$0, this$0);
	$init($Color);
	$set(this, mColor, $Color::black);
	$set(this, mClip, nullptr);
	$set(this, mFont, nullptr);
	$set(this, mTransform, $new($AffineTransform));
}

void PSPrinterJob$GState::init$($PSPrinterJob* this$0, PSPrinterJob$GState* copyGState) {
	$set(this, this$0, this$0);
	$set(this, mColor, $nc(copyGState)->mColor);
	$set(this, mClip, copyGState->mClip);
	$set(this, mFont, copyGState->mFont);
	$set(this, mTransform, copyGState->mTransform);
}

bool PSPrinterJob$GState::canSetClip($Shape* clip) {
	return this->mClip == nullptr || this->mClip->equals(clip);
}

void PSPrinterJob$GState::emitPSClip($Shape* clip) {
	$useLocalObjectStack();
	if (clip != nullptr && (this->mClip == nullptr || this->mClip->equals(clip) == false)) {
		$var($String, saveFillOp, this->this$0->mFillOpStr);
		$var($String, saveClipOp, this->this$0->mClipOpStr);
		this->this$0->convertToPSPath($(clip->getPathIterator($$new($AffineTransform))));
		this->this$0->selectClipPath();
		$set(this, mClip, clip);
		$set(this->this$0, mClipOpStr, saveFillOp);
		$set(this->this$0, mFillOpStr, saveFillOp);
	}
}

void PSPrinterJob$GState::emitTransform($AffineTransform* transform) {
	$useLocalObjectStack();
	if (transform != nullptr && transform->equals(this->mTransform) == false) {
		$var($doubles, matrix, $new($doubles, 6));
		transform->getMatrix(matrix);
		$nc(this->this$0->mPSStream)->println($$str({"["_s, $$str((float)matrix->get(0)), " "_s, $$str((float)matrix->get(1)), " "_s, $$str((float)matrix->get(2)), " "_s, $$str((float)matrix->get(3)), " "_s, $$str((float)matrix->get(4)), " "_s, $$str((float)matrix->get(5)), "] concat"_s}));
		$set(this, mTransform, transform);
	}
}

void PSPrinterJob$GState::emitPSColor($Color* color) {
	$useLocalObjectStack();
	if (color != nullptr && color->equals(this->mColor) == false) {
		$var($floats, rgb, color->getRGBColorComponents(nullptr));
		if ($nc(rgb)->get(0) == $nc(rgb)->get(1) && rgb->get(1) == rgb->get(2)) {
			$nc(this->this$0->mPSStream)->println($$str({$$str(rgb->get(0)), " SG"_s}));
		} else {
			$nc(this->this$0->mPSStream)->println($$str({$$str(rgb->get(0)), " "_s, $$str(rgb->get(1)), " "_s, $$str(rgb->get(2)), " "_s, " SC"_s}));
		}
		$set(this, mColor, color);
	}
}

void PSPrinterJob$GState::emitPSFont(int32_t psFontIndex, float fontSize) {
	$useLocalObjectStack();
	$nc(this->this$0->mPSStream)->println($$str({$$str(fontSize), " "_s, $$str(psFontIndex), " "_s, "F"_s}));
}

PSPrinterJob$GState::PSPrinterJob$GState() {
}

$Class* PSPrinterJob$GState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$GState, this$0)},
		{"mColor", "Ljava/awt/Color;", nullptr, 0, $field(PSPrinterJob$GState, mColor)},
		{"mClip", "Ljava/awt/Shape;", nullptr, 0, $field(PSPrinterJob$GState, mClip)},
		{"mFont", "Ljava/awt/Font;", nullptr, 0, $field(PSPrinterJob$GState, mFont)},
		{"mTransform", "Ljava/awt/geom/AffineTransform;", nullptr, 0, $field(PSPrinterJob$GState, mTransform)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/PSPrinterJob;)V", nullptr, 0, $method(PSPrinterJob$GState, init$, void, $PSPrinterJob*)},
		{"<init>", "(Lsun/print/PSPrinterJob;Lsun/print/PSPrinterJob$GState;)V", nullptr, 0, $method(PSPrinterJob$GState, init$, void, $PSPrinterJob*, PSPrinterJob$GState*)},
		{"canSetClip", "(Ljava/awt/Shape;)Z", nullptr, 0, $virtualMethod(PSPrinterJob$GState, canSetClip, bool, $Shape*)},
		{"emitPSClip", "(Ljava/awt/Shape;)V", nullptr, 0, $virtualMethod(PSPrinterJob$GState, emitPSClip, void, $Shape*)},
		{"emitPSColor", "(Ljava/awt/Color;)V", nullptr, 0, $virtualMethod(PSPrinterJob$GState, emitPSColor, void, $Color*)},
		{"emitPSFont", "(IF)V", nullptr, 0, $virtualMethod(PSPrinterJob$GState, emitPSFont, void, int32_t, float)},
		{"emitTransform", "(Ljava/awt/geom/AffineTransform;)V", nullptr, 0, $virtualMethod(PSPrinterJob$GState, emitTransform, void, $AffineTransform*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PSPrinterJob$GState", "sun.print.PSPrinterJob", "GState", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.PSPrinterJob$GState",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.PSPrinterJob"
	};
	$loadClass(PSPrinterJob$GState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PSPrinterJob$GState);
	});
	return class$;
}

$Class* PSPrinterJob$GState::class$ = nullptr;

	} // print
} // sun