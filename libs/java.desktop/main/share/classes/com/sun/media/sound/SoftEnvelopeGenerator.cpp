#include <com/sun/media/sound/SoftEnvelopeGenerator.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef EG_ATTACK
#undef EG_DECAY
#undef EG_DELAY
#undef EG_END
#undef EG_HOLD
#undef EG_OFF
#undef EG_RELEASE
#undef EG_SHUTDOWN
#undef EG_SUSTAIN

using $doubleArray2 = $Array<double, 2>;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftEnvelopeGenerator::init$() {
	this->max_count = 10;
	this->used_count = 0;
	$set(this, stage, $new($ints, this->max_count));
	$set(this, stage_ix, $new($ints, this->max_count));
	$set(this, stage_v, $new($doubles, this->max_count));
	$set(this, stage_count, $new($ints, this->max_count));
	$set(this, on, $new($doubleArray2, this->max_count, 1));
	$set(this, active, $new($doubleArray2, this->max_count, 1));
	$set(this, out, $new($doubleArray2, this->max_count, 1));
	$set(this, delay, $new($doubleArray2, this->max_count, 1));
	$set(this, attack, $new($doubleArray2, this->max_count, 1));
	$set(this, hold, $new($doubleArray2, this->max_count, 1));
	$set(this, decay, $new($doubleArray2, this->max_count, 1));
	$set(this, sustain, $new($doubleArray2, this->max_count, 1));
	$set(this, release, $new($doubleArray2, this->max_count, 1));
	$set(this, shutdown, $new($doubleArray2, this->max_count, 1));
	$set(this, release2, $new($doubleArray2, this->max_count, 1));
	$set(this, attack2, $new($doubleArray2, this->max_count, 1));
	$set(this, decay2, $new($doubleArray2, this->max_count, 1));
	this->control_time = 0;
}

void SoftEnvelopeGenerator::reset() {
	for (int32_t i = 0; i < this->used_count; ++i) {
		this->stage->set(i, 0);
		$nc(this->on->get(i))->set(0, 0);
		$nc(this->out->get(i))->set(0, 0);
		$nc(this->delay->get(i))->set(0, 0);
		$nc(this->attack->get(i))->set(0, 0);
		$nc(this->hold->get(i))->set(0, 0);
		$nc(this->decay->get(i))->set(0, 0);
		$nc(this->sustain->get(i))->set(0, 0);
		$nc(this->release->get(i))->set(0, 0);
		$nc(this->shutdown->get(i))->set(0, 0);
		$nc(this->attack2->get(i))->set(0, 0);
		$nc(this->decay2->get(i))->set(0, 0);
		$nc(this->release2->get(i))->set(0, 0);
	}
	this->used_count = 0;
}

void SoftEnvelopeGenerator::init($SoftSynthesizer* synth) {
	this->control_time = 1.0 / $nc(synth)->getControlRate();
	processControlLogic();
}

$doubles* SoftEnvelopeGenerator::get(int32_t instance, $String* name) {
	if (instance >= this->used_count) {
		this->used_count = instance + 1;
	}
	if (name == nullptr) {
		return this->out->get(instance);
	}
	if ($nc(name)->equals("on"_s)) {
		return this->on->get(instance);
	}
	if (name->equals("active"_s)) {
		return this->active->get(instance);
	}
	if (name->equals("delay"_s)) {
		return this->delay->get(instance);
	}
	if (name->equals("attack"_s)) {
		return this->attack->get(instance);
	}
	if (name->equals("hold"_s)) {
		return this->hold->get(instance);
	}
	if (name->equals("decay"_s)) {
		return this->decay->get(instance);
	}
	if (name->equals("sustain"_s)) {
		return this->sustain->get(instance);
	}
	if (name->equals("release"_s)) {
		return this->release->get(instance);
	}
	if (name->equals("shutdown"_s)) {
		return this->shutdown->get(instance);
	}
	if (name->equals("attack2"_s)) {
		return this->attack2->get(instance);
	}
	if (name->equals("decay2"_s)) {
		return this->decay2->get(instance);
	}
	if (name->equals("release2"_s)) {
		return this->release2->get(instance);
	}
	return nullptr;
}

void SoftEnvelopeGenerator::processControlLogic() {
	for (int32_t i = 0; i < this->used_count; ++i) {
		if (this->stage->get(i) == SoftEnvelopeGenerator::EG_END) {
			continue;
		}
		if ((this->stage->get(i) > SoftEnvelopeGenerator::EG_OFF) && (this->stage->get(i) < SoftEnvelopeGenerator::EG_RELEASE)) {
			if ($nc(this->on->get(i))->get(0) < 0.5) {
				if ($nc(this->on->get(i))->get(0) < -0.5) {
					this->stage_count->set(i, $cast(int32_t, ($Math::pow(2, $nc($nc(this->shutdown)->get(i))->get(0) / 1200.0) / this->control_time)));
					if (this->stage_count->get(i) < 0) {
						this->stage_count->set(i, 0);
					}
					this->stage_v->set(i, $nc(this->out->get(i))->get(0));
					this->stage_ix->set(i, 0);
					this->stage->set(i, SoftEnvelopeGenerator::EG_SHUTDOWN);
				} else {
					if (($nc(this->release2->get(i))->get(0) < 1.0E-6) && $nc(this->release->get(i))->get(0) < 0 && $Double::isInfinite($nc(this->release->get(i))->get(0))) {
						$nc(this->out->get(i))->set(0, 0);
						$nc(this->active->get(i))->set(0, 0);
						this->stage->set(i, SoftEnvelopeGenerator::EG_END);
						continue;
					}
					this->stage_count->set(i, $cast(int32_t, ($Math::pow(2, $nc($nc(this->release)->get(i))->get(0) / 1200.0) / this->control_time)));
					(*this->stage_count)[i] += $cast(int32_t, ($nc($nc(this->release2)->get(i))->get(0) / (this->control_time * 1000)));
					if (this->stage_count->get(i) < 0) {
						this->stage_count->set(i, 0);
					}
					this->stage_ix->set(i, 0);
					double m = 1 - $nc(this->out->get(i))->get(0);
					this->stage_ix->set(i, $cast(int32_t, (this->stage_count->get(i) * m)));
					this->stage->set(i, SoftEnvelopeGenerator::EG_RELEASE);
				}
			}
		}
		{
			double sustain = 0;
			switch (this->stage->get(i)) {
			case SoftEnvelopeGenerator::EG_OFF:
				$nc(this->active->get(i))->set(0, 1);
				if ($nc(this->on->get(i))->get(0) < 0.5) {
					break;
				}
				this->stage->set(i, SoftEnvelopeGenerator::EG_DELAY);
				this->stage_ix->set(i, $cast(int32_t, ($Math::pow(2, $nc($nc(this->delay)->get(i))->get(0) / 1200.0) / this->control_time)));
				if (this->stage_ix->get(i) < 0) {
					this->stage_ix->set(i, 0);
				}
			case SoftEnvelopeGenerator::EG_DELAY:
				if (this->stage_ix->get(i) == 0) {
					double attack = $nc($nc(this->attack)->get(i))->get(0);
					double attack2 = $nc($nc(this->attack2)->get(i))->get(0);
					if (attack2 < 1.0E-6 && (attack < 0 && $Double::isInfinite(attack))) {
						$nc(this->out->get(i))->set(0, 1);
						this->stage->set(i, SoftEnvelopeGenerator::EG_HOLD);
						this->stage_count->set(i, $cast(int32_t, ($Math::pow(2, $nc($nc(this->hold)->get(i))->get(0) / 1200.0) / this->control_time)));
						this->stage_ix->set(i, 0);
					} else {
						this->stage->set(i, SoftEnvelopeGenerator::EG_ATTACK);
						this->stage_count->set(i, $cast(int32_t, ($Math::pow(2, attack / 1200.0) / this->control_time)));
						(*this->stage_count)[i] += $cast(int32_t, (attack2 / (this->control_time * 1000)));
						if (this->stage_count->get(i) < 0) {
							this->stage_count->set(i, 0);
						}
						this->stage_ix->set(i, 0);
					}
				} else {
					--(*this->stage_ix)[i];
				}
				break;
			case SoftEnvelopeGenerator::EG_ATTACK:
				++(*this->stage_ix)[i];
				if (this->stage_ix->get(i) >= this->stage_count->get(i)) {
					$nc(this->out->get(i))->set(0, 1);
					this->stage->set(i, SoftEnvelopeGenerator::EG_HOLD);
				} else {
					double a = ((double)this->stage_ix->get(i)) / ((double)this->stage_count->get(i));
					int32_t var$0 = 1;
					double var$2 = (40.0 / 96.0) / $Math::log(10);
					double var$1 = var$2 * $Math::log(a);
					a = var$0 + var$1;
					if (a < 0) {
						a = 0;
					} else if (a > 1) {
						a = 1;
					}
					$nc(this->out->get(i))->set(0, a);
				}
				break;
			case SoftEnvelopeGenerator::EG_HOLD:
				++(*this->stage_ix)[i];
				if (this->stage_ix->get(i) >= this->stage_count->get(i)) {
					this->stage->set(i, SoftEnvelopeGenerator::EG_DECAY);
					this->stage_count->set(i, $cast(int32_t, ($Math::pow(2, $nc($nc(this->decay)->get(i))->get(0) / 1200.0) / this->control_time)));
					(*this->stage_count)[i] += $cast(int32_t, ($nc($nc(this->decay2)->get(i))->get(0) / (this->control_time * 1000)));
					if (this->stage_count->get(i) < 0) {
						this->stage_count->set(i, 0);
					}
					this->stage_ix->set(i, 0);
				}
				break;
			case SoftEnvelopeGenerator::EG_DECAY:
				++(*this->stage_ix)[i];
				sustain = $nc($nc(this->sustain)->get(i))->get(0) * (1.0 / 1000.0);
				if (this->stage_ix->get(i) >= this->stage_count->get(i)) {
					$nc(this->out->get(i))->set(0, sustain);
					this->stage->set(i, SoftEnvelopeGenerator::EG_SUSTAIN);
					if (sustain < 0.001) {
						$nc(this->out->get(i))->set(0, 0);
						$nc(this->active->get(i))->set(0, 0);
						this->stage->set(i, SoftEnvelopeGenerator::EG_END);
					}
				} else {
					double m = ((double)this->stage_ix->get(i)) / ((double)this->stage_count->get(i));
					$nc(this->out->get(i))->set(0, (1 - m) + sustain * m);
				}
				break;
			case SoftEnvelopeGenerator::EG_SUSTAIN:
				break;
			case SoftEnvelopeGenerator::EG_RELEASE:
				++(*this->stage_ix)[i];
				if (this->stage_ix->get(i) >= this->stage_count->get(i)) {
					$nc(this->out->get(i))->set(0, 0);
					$nc(this->active->get(i))->set(0, 0);
					this->stage->set(i, SoftEnvelopeGenerator::EG_END);
				} else {
					double m = ((double)this->stage_ix->get(i)) / ((double)this->stage_count->get(i));
					$nc(this->out->get(i))->set(0, (1 - m));
					if ($nc(this->on->get(i))->get(0) < -0.5) {
						this->stage_count->set(i, $cast(int32_t, ($Math::pow(2, $nc($nc(this->shutdown)->get(i))->get(0) / 1200.0) / this->control_time)));
						if (this->stage_count->get(i) < 0) {
							this->stage_count->set(i, 0);
						}
						this->stage_v->set(i, $nc(this->out->get(i))->get(0));
						this->stage_ix->set(i, 0);
						this->stage->set(i, SoftEnvelopeGenerator::EG_SHUTDOWN);
					}
					if ($nc(this->on->get(i))->get(0) > 0.5) {
						sustain = $nc($nc(this->sustain)->get(i))->get(0) * (1.0 / 1000.0);
						if ($nc(this->out->get(i))->get(0) > sustain) {
							this->stage->set(i, SoftEnvelopeGenerator::EG_DECAY);
							this->stage_count->set(i, $cast(int32_t, ($Math::pow(2, $nc($nc(this->decay)->get(i))->get(0) / 1200.0) / this->control_time)));
							(*this->stage_count)[i] += $cast(int32_t, ($nc($nc(this->decay2)->get(i))->get(0) / (this->control_time * 1000)));
							if (this->stage_count->get(i) < 0) {
								this->stage_count->set(i, 0);
							}
							m = ($nc(this->out->get(i))->get(0) - 1) / (sustain - 1);
							this->stage_ix->set(i, $cast(int32_t, (this->stage_count->get(i) * m)));
						}
					}
				}
				break;
			case SoftEnvelopeGenerator::EG_SHUTDOWN:
				++(*this->stage_ix)[i];
				if (this->stage_ix->get(i) >= this->stage_count->get(i)) {
					$nc(this->out->get(i))->set(0, 0);
					$nc(this->active->get(i))->set(0, 0);
					this->stage->set(i, SoftEnvelopeGenerator::EG_END);
				} else {
					double m = ((double)this->stage_ix->get(i)) / ((double)this->stage_count->get(i));
					$nc(this->out->get(i))->set(0, (1 - m) * this->stage_v->get(i));
				}
				break;
			default:
				break;
			}
		}
	}
}

SoftEnvelopeGenerator::SoftEnvelopeGenerator() {
}

$Class* SoftEnvelopeGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EG_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_OFF)},
		{"EG_DELAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_DELAY)},
		{"EG_ATTACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_ATTACK)},
		{"EG_HOLD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_HOLD)},
		{"EG_DECAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_DECAY)},
		{"EG_SUSTAIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_SUSTAIN)},
		{"EG_RELEASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_RELEASE)},
		{"EG_SHUTDOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_SHUTDOWN)},
		{"EG_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SoftEnvelopeGenerator, EG_END)},
		{"max_count", "I", nullptr, 0, $field(SoftEnvelopeGenerator, max_count)},
		{"used_count", "I", nullptr, 0, $field(SoftEnvelopeGenerator, used_count)},
		{"stage", "[I", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, stage)},
		{"stage_ix", "[I", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, stage_ix)},
		{"stage_v", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, stage_v)},
		{"stage_count", "[I", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, stage_count)},
		{"on", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, on)},
		{"active", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, active)},
		{"out", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, out)},
		{"delay", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, delay)},
		{"attack", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, attack)},
		{"hold", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, hold)},
		{"decay", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, decay)},
		{"sustain", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, sustain)},
		{"release", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, release)},
		{"shutdown", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, shutdown)},
		{"release2", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, release2)},
		{"attack2", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, attack2)},
		{"decay2", "[[D", nullptr, $PRIVATE | $FINAL, $field(SoftEnvelopeGenerator, decay2)},
		{"control_time", "D", nullptr, $PRIVATE, $field(SoftEnvelopeGenerator, control_time)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SoftEnvelopeGenerator, init$, void)},
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC, $virtualMethod(SoftEnvelopeGenerator, get, $doubles*, int32_t, $String*)},
		{"init", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC, $virtualMethod(SoftEnvelopeGenerator, init, void, $SoftSynthesizer*)},
		{"processControlLogic", "()V", nullptr, $PUBLIC, $virtualMethod(SoftEnvelopeGenerator, processControlLogic, void)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SoftEnvelopeGenerator, reset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftEnvelopeGenerator",
		"java.lang.Object",
		"com.sun.media.sound.SoftProcess",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SoftEnvelopeGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftEnvelopeGenerator);
	});
	return class$;
}

$Class* SoftEnvelopeGenerator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com