#include <java/awt/font/TextJustifier.h>
#include <java/awt/font/GlyphJustificationInfo.h>
#include <jcpp.h>

#undef DEBUG
#undef MAX_PRIORITY

using $GlyphJustificationInfoArray = $Array<::java::awt::font::GlyphJustificationInfo>;
using $GlyphJustificationInfo = ::java::awt::font::GlyphJustificationInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

bool TextJustifier::DEBUG = false;

void TextJustifier::init$($GlyphJustificationInfoArray* info, int32_t start, int32_t limit) {
	$useLocalObjectStack();
	$set(this, info, info);
	this->start = start;
	this->limit = limit;
	if (TextJustifier::DEBUG) {
		$nc($System::out)->println($$str({"start: "_s, $$str(start), ", limit: "_s, $$str(limit)}));
		for (int32_t i = start; i < limit; ++i) {
			$var($GlyphJustificationInfo, gji, $nc(info)->get(i));
			$System::out->println($$str({"w: "_s, $$str($nc(gji)->weight), ", gp: "_s, $$str($nc(gji)->growPriority), ", gll: "_s, $$str($nc(gji)->growLeftLimit), ", grl: "_s, $$str($nc(gji)->growRightLimit)}));
		}
	}
}

$floats* TextJustifier::justify(float delta) {
	$useLocalObjectStack();
	$var($floats, deltas, $new($floats, $nc(this->info)->length * 2));
	bool grow = delta > 0;
	if (TextJustifier::DEBUG) {
		$nc($System::out)->println($$str({"delta: "_s, $$str(delta)}));
	}
	int32_t fallbackPriority = -1;
	for (int32_t p = 0; delta != 0; ++p) {
		bool lastPass = p > TextJustifier::MAX_PRIORITY;
		if (lastPass) {
			p = fallbackPriority;
		}
		float weight = 0;
		float gslimit = 0;
		float absorbweight = 0;
		for (int32_t i = this->start; i < this->limit; ++i) {
			$var($GlyphJustificationInfo, gi, this->info->get(i));
			if ((grow ? $nc(gi)->growPriority : $nc(gi)->shrinkPriority) == p) {
				if (fallbackPriority == -1) {
					fallbackPriority = p;
				}
				if (i != this->start) {
					weight += $nc(gi)->weight;
					if (grow) {
						gslimit += gi->growLeftLimit;
						if (gi->growAbsorb) {
							absorbweight += gi->weight;
						}
					} else {
						gslimit += gi->shrinkLeftLimit;
						if (gi->shrinkAbsorb) {
							absorbweight += gi->weight;
						}
					}
				}
				if (i + 1 != this->limit) {
					weight += $nc(gi)->weight;
					if (grow) {
						gslimit += gi->growRightLimit;
						if (gi->growAbsorb) {
							absorbweight += gi->weight;
						}
					} else {
						gslimit += gi->shrinkRightLimit;
						if (gi->shrinkAbsorb) {
							absorbweight += gi->weight;
						}
					}
				}
			}
		}
		if (!grow) {
			gslimit = -gslimit;
		}
		bool hitLimit = (weight == 0) || (!lastPass && ((delta < 0) == (delta < gslimit)));
		bool absorbing = hitLimit && absorbweight > 0;
		float weightedDelta = 0;
		if (weight != 0) {
			weightedDelta = delta / weight;
		}
		float weightedAbsorb = 0;
		if (hitLimit && absorbweight != 0) {
			weightedAbsorb = (delta - gslimit) / absorbweight;
		}
		if (TextJustifier::DEBUG) {
			$nc($System::out)->println($$str({"pass: "_s, $$str(p), ", d: "_s, $$str(delta), ", l: "_s, $$str(gslimit), ", w: "_s, $$str(weight), ", aw: "_s, $$str(absorbweight), ", wd: "_s, $$str(weightedDelta), ", wa: "_s, $$str(weightedAbsorb), ", hit: "_s, (hitLimit ? "y"_s : "n"_s)}));
		}
		int32_t n = this->start * 2;
		for (int32_t i = this->start; i < this->limit; ++i) {
			$var($GlyphJustificationInfo, gi, this->info->get(i));
			if ((grow ? $nc(gi)->growPriority : $nc(gi)->shrinkPriority) == p) {
				if (i != this->start) {
					float d = 0.0;
					if (hitLimit) {
						d = grow ? $nc(gi)->growLeftLimit : -$nc(gi)->shrinkLeftLimit;
						if (absorbing) {
							d += $nc(gi)->weight * weightedAbsorb;
						}
					} else {
						d = $nc(gi)->weight * weightedDelta;
					}
					(*deltas)[n] += d;
				}
				++n;
				if (i + 1 != this->limit) {
					float d = 0.0;
					if (hitLimit) {
						d = grow ? $nc(gi)->growRightLimit : -$nc(gi)->shrinkRightLimit;
						if (absorbing) {
							d += $nc(gi)->weight * weightedAbsorb;
						}
					} else {
						d = $nc(gi)->weight * weightedDelta;
					}
					(*deltas)[n] += d;
				}
				++n;
			} else {
				n += 2;
			}
		}
		if (!lastPass && hitLimit && !absorbing) {
			delta -= gslimit;
		} else {
			delta = 0;
		}
	}
	if (TextJustifier::DEBUG) {
		float total = 0;
		for (int32_t i = 0; i < deltas->length; ++i) {
			total += deltas->get(i);
			$nc($System::out)->print($$str({$$str(deltas->get(i)), ", "_s}));
			if (i % 20 == 9) {
				$System::out->println();
			}
		}
		$nc($System::out)->println($$str({"\ntotal: "_s, $$str(total)}));
		$System::out->println();
	}
	return deltas;
}

void TextJustifier::clinit$($Class* clazz) {
	TextJustifier::DEBUG = false;
}

TextJustifier::TextJustifier() {
}

$Class* TextJustifier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"info", "[Ljava/awt/font/GlyphJustificationInfo;", nullptr, $PRIVATE, $field(TextJustifier, info)},
		{"start", "I", nullptr, $PRIVATE, $field(TextJustifier, start)},
		{"limit", "I", nullptr, $PRIVATE, $field(TextJustifier, limit)},
		{"DEBUG", "Z", nullptr, $STATIC, $staticField(TextJustifier, DEBUG)},
		{"MAX_PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextJustifier, MAX_PRIORITY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/font/GlyphJustificationInfo;II)V", nullptr, 0, $method(TextJustifier, init$, void, $GlyphJustificationInfoArray*, int32_t, int32_t)},
		{"justify", "(F)[F", nullptr, $PUBLIC, $virtualMethod(TextJustifier, justify, $floats*, float)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.font.TextJustifier",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextJustifier, name, initialize, &classInfo$$, TextJustifier::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TextJustifier);
	});
	return class$;
}

$Class* TextJustifier::class$ = nullptr;

		} // font
	} // awt
} // java