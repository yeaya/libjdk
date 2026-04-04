#include <sun/font/LayoutPathImpl$SegmentPath$Segment.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D.h>
#include <sun/font/LayoutPathImpl$SegmentPath$LineInfo.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <jcpp.h>

#undef MIN_VALUE

using $GeneralPath = ::java::awt::geom::GeneralPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;
using $LayoutPathImpl$SegmentPath$LineInfo = ::sun::font::LayoutPathImpl$SegmentPath$LineInfo;

namespace sun {
	namespace font {

void LayoutPathImpl$SegmentPath$Segment::init$($LayoutPathImpl$SegmentPath* this$0, int32_t ix) {
	$set(this, this$0, this$0);
	this->ix = ix;
	double len = $nc(this$0->data)->get(ix + 2) - $nc(this$0->data)->get(ix - 1);
	this->ux = (this$0->data->get(ix) - this$0->data->get(ix - 3)) / len;
	this->uy = (this$0->data->get(ix + 1) - this$0->data->get(ix - 2)) / len;
	$set(this, temp, $new($LayoutPathImpl$SegmentPath$LineInfo, this$0));
}

void LayoutPathImpl$SegmentPath$Segment::init() {
	;
	this->broken = true;
	this->cx = (this->cy = $Double::MIN_VALUE);
	$set(this, gp, $new($GeneralPath));
}

void LayoutPathImpl$SegmentPath$Segment::move() {
	;
	this->broken = true;
}

void LayoutPathImpl$SegmentPath$Segment::close() {
	if (!this->broken) {
		;
		$nc(this->gp)->closePath();
	}
}

void LayoutPathImpl$SegmentPath$Segment::line($LayoutPathImpl$SegmentPath$LineInfo* li) {
	;
	if ($nc(li)->pin(this->ix, this->temp)) {
		;
		$nc(this->temp)->sx -= $nc(this->this$0->data)->get(this->ix - 1);
		double sx = this->this$0->data->get(this->ix - 3) + this->temp->sx * this->ux - this->temp->sy * this->uy;
		double sy = this->this$0->data->get(this->ix - 2) + this->temp->sx * this->uy + this->temp->sy * this->ux;
		this->temp->lx -= this->this$0->data->get(this->ix - 1);
		double lx = this->this$0->data->get(this->ix - 3) + this->temp->lx * this->ux - this->temp->ly * this->uy;
		double ly = this->this$0->data->get(this->ix - 2) + this->temp->lx * this->uy + this->temp->ly * this->ux;
		;
		if (sx != this->cx || sy != this->cy) {
			if (this->broken) {
				;
				$nc(this->gp)->moveTo((float)sx, (float)sy);
			} else {
				;
				$nc(this->gp)->lineTo((float)sx, (float)sy);
			}
		}
		;
		$nc(this->gp)->lineTo((float)lx, (float)ly);
		this->broken = false;
		this->cx = lx;
		this->cy = ly;
	}
}

LayoutPathImpl$SegmentPath$Segment::LayoutPathImpl$SegmentPath$Segment() {
}

$Class* LayoutPathImpl$SegmentPath$Segment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $FINAL | $SYNTHETIC, $field(LayoutPathImpl$SegmentPath$Segment, this$0)},
		{"ix", "I", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, ix)},
		{"ux", "D", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, ux)},
		{"uy", "D", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, uy)},
		{"temp", "Lsun/font/LayoutPathImpl$SegmentPath$LineInfo;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Segment, temp)},
		{"broken", "Z", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, broken)},
		{"cx", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, cx)},
		{"cy", "D", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, cy)},
		{"gp", "Ljava/awt/geom/GeneralPath;", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Segment, gp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/LayoutPathImpl$SegmentPath;I)V", nullptr, 0, $method(LayoutPathImpl$SegmentPath$Segment, init$, void, $LayoutPathImpl$SegmentPath*, int32_t)},
		{"close", "()V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Segment, close, void)},
		{"init", "()V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Segment, init, void)},
		{"line", "(Lsun/font/LayoutPathImpl$SegmentPath$LineInfo;)V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Segment, line, void, $LayoutPathImpl$SegmentPath$LineInfo*)},
		{"move", "()V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Segment, move, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.LayoutPathImpl$SegmentPath", "sun.font.LayoutPathImpl", "SegmentPath", $PUBLIC | $STATIC | $FINAL},
		{"sun.font.LayoutPathImpl$SegmentPath$Segment", "sun.font.LayoutPathImpl$SegmentPath", "Segment", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.LayoutPathImpl$SegmentPath$Segment",
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
		"sun.font.LayoutPathImpl"
	};
	$loadClass(LayoutPathImpl$SegmentPath$Segment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LayoutPathImpl$SegmentPath$Segment);
	});
	return class$;
}

$Class* LayoutPathImpl$SegmentPath$Segment::class$ = nullptr;

	} // font
} // sun