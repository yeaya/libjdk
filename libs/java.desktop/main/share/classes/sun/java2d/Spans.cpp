#include <sun/java2d/Spans.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/java2d/Spans$Span.h>
#include <sun/java2d/Spans$SpanIntersection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $Spans$Span = ::sun::java2d::Spans$Span;
using $Spans$SpanIntersection = ::sun::java2d::Spans$SpanIntersection;

namespace sun {
	namespace java2d {

void Spans::init$() {
	$set(this, mSpans, $new($Vector, Spans::kMaxAddsSinceSort));
	this->mAddsSinceSort = 0;
}

void Spans::add(float start, float end) {
	if (this->mSpans != nullptr) {
		this->mSpans->add($$new($Spans$Span, start, end));
		if (++this->mAddsSinceSort >= Spans::kMaxAddsSinceSort) {
			sortAndCollapse();
		}
	}
}

void Spans::addInfinite() {
	$set(this, mSpans, nullptr);
}

bool Spans::intersects(float start, float end) {
	bool doesIntersect = false;
	if (this->mSpans != nullptr) {
		if (this->mAddsSinceSort > 0) {
			sortAndCollapse();
		}
		$init($Spans$SpanIntersection);
		int32_t found = $Collections::binarySearch(this->mSpans, $$new($Spans$Span, start, end), $Spans$SpanIntersection::instance);
		doesIntersect = found >= 0;
	} else {
		doesIntersect = true;
	}
	return doesIntersect;
}

void Spans::sortAndCollapse() {
	$useLocalObjectStack();
	$Collections::sort(this->mSpans);
	this->mAddsSinceSort = 0;
	$var($Iterator, iter, $nc(this->mSpans)->iterator());
	$var($Spans$Span, span, nullptr);
	if ($nc(iter)->hasNext()) {
		$assign(span, $cast($Spans$Span, iter->next()));
	}
	while (iter->hasNext()) {
		$var($Spans$Span, nextSpan, $cast($Spans$Span, iter->next()));
		if ($nc(span)->subsume(nextSpan)) {
			iter->remove();
		} else {
			$assign(span, nextSpan);
		}
	}
}

Spans::Spans() {
}

$Class* Spans::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kMaxAddsSinceSort", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Spans, kMaxAddsSinceSort)},
		{"mSpans", "Ljava/util/List;", "Ljava/util/List<Lsun/java2d/Spans$Span;>;", $PRIVATE, $field(Spans, mSpans)},
		{"mAddsSinceSort", "I", nullptr, $PRIVATE, $field(Spans, mAddsSinceSort)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Spans, init$, void)},
		{"add", "(FF)V", nullptr, $PUBLIC, $virtualMethod(Spans, add, void, float, float)},
		{"addInfinite", "()V", nullptr, $PUBLIC, $virtualMethod(Spans, addInfinite, void)},
		{"intersects", "(FF)Z", nullptr, $PUBLIC, $virtualMethod(Spans, intersects, bool, float, float)},
		{"sortAndCollapse", "()V", nullptr, $PRIVATE, $method(Spans, sortAndCollapse, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.Spans$SpanIntersection", "sun.java2d.Spans", "SpanIntersection", $STATIC},
		{"sun.java2d.Spans$Span", "sun.java2d.Spans", "Span", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.Spans",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.Spans$SpanIntersection,sun.java2d.Spans$Span"
	};
	$loadClass(Spans, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Spans);
	});
	return class$;
}

$Class* Spans::class$ = nullptr;

	} // java2d
} // sun