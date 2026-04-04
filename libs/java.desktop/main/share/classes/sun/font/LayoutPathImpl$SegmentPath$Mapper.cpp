#include <sun/font/LayoutPathImpl$SegmentPath$Mapper.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/GeneralPath.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/PathIterator.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <sun/font/LayoutPathImpl$SegmentPath$LineInfo.h>
#include <sun/font/LayoutPathImpl$SegmentPath$Segment.h>
#include <sun/font/LayoutPathImpl$SegmentPath.h>
#include <jcpp.h>

using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $GeneralPath = ::java::awt::geom::GeneralPath;
using $PathIterator = ::java::awt::geom::PathIterator;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $LayoutPathImpl$SegmentPath = ::sun::font::LayoutPathImpl$SegmentPath;
using $LayoutPathImpl$SegmentPath$LineInfo = ::sun::font::LayoutPathImpl$SegmentPath$LineInfo;
using $LayoutPathImpl$SegmentPath$Segment = ::sun::font::LayoutPathImpl$SegmentPath$Segment;

namespace sun {
	namespace font {

void LayoutPathImpl$SegmentPath$Mapper::init$($LayoutPathImpl$SegmentPath* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$set(this, li, $new($LayoutPathImpl$SegmentPath$LineInfo, this$0));
	$set(this, segments, $new($ArrayList));
	for (int32_t i = 3; i < $nc(this$0->data)->length; i += 3) {
		if (this$0->data->get(i + 2) != this$0->data->get(i - 1)) {
			this->segments->add($$new($LayoutPathImpl$SegmentPath$Segment, this$0, i));
		}
	}
	$set(this, mpt, $new($Point2D$Double));
	$set(this, cpt, $new($Point2D$Double));
}

void LayoutPathImpl$SegmentPath$Mapper::init() {
	$useLocalObjectStack();
	;
	this->haveMT = false;
	{
		$var($Iterator, i$, this->segments->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				$nc(s)->init();
			}
		}
	}
}

void LayoutPathImpl$SegmentPath$Mapper::moveTo(double x, double y) {
	;
	this->mpt->x = x;
	this->mpt->y = y;
	this->haveMT = true;
}

void LayoutPathImpl$SegmentPath$Mapper::lineTo(double x, double y) {
	$useLocalObjectStack();
	;
	if (this->haveMT) {
		this->cpt->x = this->mpt->x;
		this->cpt->y = this->mpt->y;
	}
	if (x == this->cpt->x && y == this->cpt->y) {
		return;
	}
	if (this->haveMT) {
		this->haveMT = false;
		{
			$var($Iterator, i$, this->segments->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
				{
					$nc(s)->move();
				}
			}
		}
	}
	this->li->set(this->cpt->x, this->cpt->y, x, y);
	{
		$var($Iterator, i$, this->segments->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				$nc(s)->line(this->li);
			}
		}
	}
	this->cpt->x = x;
	this->cpt->y = y;
}

void LayoutPathImpl$SegmentPath$Mapper::close() {
	$useLocalObjectStack();
	;
	lineTo(this->mpt->x, this->mpt->y);
	{
		$var($Iterator, i$, this->segments->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, s, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				$nc(s)->close();
			}
		}
	}
}

$Shape* LayoutPathImpl$SegmentPath$Mapper::mapShape($Shape* s) {
	$useLocalObjectStack();
	;
	$var($PathIterator, pi, $nc(s)->getPathIterator(nullptr, 1));
	;
	init();
	$var($doubles, coords, $new($doubles, 2));
	while (!$nc(pi)->isDone()) {
		switch (pi->currentSegment(coords)) {
		case 4:
			close();
			break;
		case 0:
			moveTo(coords->get(0), coords->get(1));
			break;
		case 1:
			lineTo(coords->get(0), coords->get(1));
			break;
		default:
			break;
		}
		pi->next();
	}
	;
	$var($GeneralPath, gp, $new($GeneralPath));
	{
		$var($Iterator, i$, this->segments->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($LayoutPathImpl$SegmentPath$Segment, seg, $cast($LayoutPathImpl$SegmentPath$Segment, i$->next()));
			{
				gp->append($nc(seg)->gp, false);
			}
		}
	}
	return gp;
}

LayoutPathImpl$SegmentPath$Mapper::LayoutPathImpl$SegmentPath$Mapper() {
}

$Class* LayoutPathImpl$SegmentPath$Mapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/LayoutPathImpl$SegmentPath;", nullptr, $FINAL | $SYNTHETIC, $field(LayoutPathImpl$SegmentPath$Mapper, this$0)},
		{"li", "Lsun/font/LayoutPathImpl$SegmentPath$LineInfo;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, li)},
		{"segments", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/font/LayoutPathImpl$SegmentPath$Segment;>;", $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, segments)},
		{"mpt", "Ljava/awt/geom/Point2D$Double;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, mpt)},
		{"cpt", "Ljava/awt/geom/Point2D$Double;", nullptr, $FINAL, $field(LayoutPathImpl$SegmentPath$Mapper, cpt)},
		{"haveMT", "Z", nullptr, 0, $field(LayoutPathImpl$SegmentPath$Mapper, haveMT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/LayoutPathImpl$SegmentPath;)V", nullptr, 0, $method(LayoutPathImpl$SegmentPath$Mapper, init$, void, $LayoutPathImpl$SegmentPath*)},
		{"close", "()V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Mapper, close, void)},
		{"init", "()V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Mapper, init, void)},
		{"lineTo", "(DD)V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Mapper, lineTo, void, double, double)},
		{"mapShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(LayoutPathImpl$SegmentPath$Mapper, mapShape, $Shape*, $Shape*)},
		{"moveTo", "(DD)V", nullptr, 0, $virtualMethod(LayoutPathImpl$SegmentPath$Mapper, moveTo, void, double, double)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.LayoutPathImpl$SegmentPath", "sun.font.LayoutPathImpl", "SegmentPath", $PUBLIC | $STATIC | $FINAL},
		{"sun.font.LayoutPathImpl$SegmentPath$Mapper", "sun.font.LayoutPathImpl$SegmentPath", "Mapper", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.LayoutPathImpl$SegmentPath$Mapper",
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
	$loadClass(LayoutPathImpl$SegmentPath$Mapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LayoutPathImpl$SegmentPath$Mapper);
	});
	return class$;
}

$Class* LayoutPathImpl$SegmentPath$Mapper::class$ = nullptr;

	} // font
} // sun