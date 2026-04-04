#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef BUCKET
#undef LAST
#undef MAX
#undef STEPS

using $StatLongArray = $Array<::sun::java2d::marlin::stats::StatLong>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {

$ints* Histogram::STEPS = nullptr;

int32_t Histogram::bucket(int32_t val) {
	$init(Histogram);
	for (int32_t i = 1; i < Histogram::MAX; ++i) {
		if (val < Histogram::STEPS->get(i)) {
			return i - 1;
		}
	}
	return Histogram::LAST;
}

void Histogram::init$($String* name) {
	$useLocalObjectStack();
	$StatLong::init$(name);
	$set(this, stats, $new($StatLongArray, Histogram::MAX));
	for (int32_t i = 0; i < Histogram::MAX; ++i) {
		this->stats->set(i, $$new($StatLong, $($String::format("%5s .. %5s"_s, $$new($ObjectArray, {
			$($Integer::valueOf(Histogram::STEPS->get(i))),
			((i + 1 < Histogram::MAX) ? $$of($Integer::valueOf(Histogram::STEPS->get(i + 1))) : $of("~"_s))
		})))));
	}
}

void Histogram::reset() {
	$StatLong::reset();
	for (int32_t i = 0; i < Histogram::MAX; ++i) {
		$nc(this->stats->get(i))->reset();
	}
}

void Histogram::add(int32_t val) {
	$StatLong::add(val);
	$nc(this->stats->get(bucket(val)))->add(val);
}

void Histogram::add(int64_t val) {
	add((int32_t)val);
}

$String* Histogram::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, 2048));
	$$nc($StatLong::toString(sb))->append(" { "_s);
	for (int32_t i = 0; i < Histogram::MAX; ++i) {
		if ($nc(this->stats->get(i))->count != 0) {
			sb->append("\n        "_s)->append($($nc(this->stats->get(i))->toString()));
		}
	}
	return sb->append(" }"_s)->toString();
}

void Histogram::clinit$($Class* clazz) {
	$assignStatic(Histogram::STEPS, $new($ints, Histogram::MAX));
	{
		Histogram::STEPS->set(0, 0);
		Histogram::STEPS->set(1, 1);
		for (int32_t i = 2; i < Histogram::MAX; ++i) {
			Histogram::STEPS->set(i, Histogram::STEPS->get(i - 1) * Histogram::BUCKET);
		}
	}
}

Histogram::Histogram() {
}

$Class* Histogram::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BUCKET", "I", nullptr, $STATIC | $FINAL, $constField(Histogram, BUCKET)},
		{"MAX", "I", nullptr, $STATIC | $FINAL, $constField(Histogram, MAX)},
		{"LAST", "I", nullptr, $STATIC | $FINAL, $constField(Histogram, LAST)},
		{"STEPS", "[I", nullptr, $STATIC | $FINAL, $staticField(Histogram, STEPS)},
		{"stats", "[Lsun/java2d/marlin/stats/StatLong;", nullptr, $PRIVATE | $FINAL, $field(Histogram, stats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Histogram, init$, void, $String*)},
		{"add", "(I)V", nullptr, $PUBLIC, $virtualMethod(Histogram, add, void, int32_t)},
		{"add", "(J)V", nullptr, $PUBLIC, $virtualMethod(Histogram, add, void, int64_t)},
		{"bucket", "(I)I", nullptr, $STATIC, $staticMethod(Histogram, bucket, int32_t, int32_t)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(Histogram, reset, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Histogram, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.marlin.stats.Histogram",
		"sun.java2d.marlin.stats.StatLong",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Histogram, name, initialize, &classInfo$$, Histogram::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Histogram);
	});
	return class$;
}

$Class* Histogram::class$ = nullptr;

			} // stats
		} // marlin
	} // java2d
} // sun