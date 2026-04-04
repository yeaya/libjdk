#include <sun/java2d/Spans$SpanIntersection.h>
#include <sun/java2d/Spans$Span.h>
#include <sun/java2d/Spans.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spans$Span = ::sun::java2d::Spans$Span;

namespace sun {
	namespace java2d {

Spans$SpanIntersection* Spans$SpanIntersection::instance = nullptr;

void Spans$SpanIntersection::init$() {
}

int32_t Spans$SpanIntersection::compare($Spans$Span* span1, $Spans$Span* span2) {
	int32_t result = 0;
	float var$0 = $nc(span1)->getEnd();
	if (var$0 <= $nc(span2)->getStart()) {
		result = -1;
	} else {
		float var$1 = span1->getStart();
		if (var$1 >= span2->getEnd()) {
			result = 1;
		} else {
			result = 0;
		}
	}
	return result;
}

int32_t Spans$SpanIntersection::compare(Object$* span1, Object$* span2) {
	return this->compare($cast($Spans$Span, span1), $cast($Spans$Span, span2));
}

void Spans$SpanIntersection::clinit$($Class* clazz) {
	$assignStatic(Spans$SpanIntersection::instance, $new(Spans$SpanIntersection));
}

Spans$SpanIntersection::Spans$SpanIntersection() {
}

$Class* Spans$SpanIntersection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/java2d/Spans$SpanIntersection;", nullptr, $STATIC | $FINAL, $staticField(Spans$SpanIntersection, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Spans$SpanIntersection, init$, void)},
		{"compare", "(Lsun/java2d/Spans$Span;Lsun/java2d/Spans$Span;)I", nullptr, $PUBLIC, $virtualMethod(Spans$SpanIntersection, compare, int32_t, $Spans$Span*, $Spans$Span*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Spans$SpanIntersection, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.Spans$SpanIntersection", "sun.java2d.Spans", "SpanIntersection", $STATIC},
		{"sun.java2d.Spans$Span", "sun.java2d.Spans", "Span", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.Spans$SpanIntersection",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lsun/java2d/Spans$Span;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.Spans"
	};
	$loadClass(Spans$SpanIntersection, name, initialize, &classInfo$$, Spans$SpanIntersection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Spans$SpanIntersection);
	});
	return class$;
}

$Class* Spans$SpanIntersection::class$ = nullptr;

	} // java2d
} // sun