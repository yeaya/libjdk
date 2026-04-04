#include <com/sun/media/sound/SoftTuning.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/util/Arrays.h>
#include <javax/sound/midi/Patch.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Patch = ::javax::sound::midi::Patch;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftTuning::init$() {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	$set(this, name, "12-TET"_s);
	for (int32_t i = 0; i < this->tuning->length; ++i) {
		this->tuning->set(i, (double)(i * 100));
	}
}

void SoftTuning::init$($bytes* data) {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	for (int32_t i = 0; i < this->tuning->length; ++i) {
		this->tuning->set(i, (double)(i * 100));
	}
	load(data);
}

void SoftTuning::init$($Patch* patch) {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	$set(this, patch, patch);
	$set(this, name, "12-TET"_s);
	for (int32_t i = 0; i < this->tuning->length; ++i) {
		this->tuning->set(i, (double)(i * 100));
	}
}

void SoftTuning::init$($Patch* patch, $bytes* data) {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	$set(this, patch, patch);
	for (int32_t i = 0; i < this->tuning->length; ++i) {
		this->tuning->set(i, (double)(i * 100));
	}
	load(data);
}

bool SoftTuning::checksumOK($bytes* data) {
	int32_t x = $nc(data)->get(1) & 0xff;
	for (int32_t i = 2; i < data->length - 2; ++i) {
		x = x ^ (data->get(i) & 0xff);
	}
	return (data->get(data->length - 2) & 0xff) == (x & 0x7f);
}

void SoftTuning::load($bytes* data) {
	$useLocalObjectStack();
	if (($nc(data)->get(1) & 0xff) == 0x7e || (data->get(1) & 0xff) == 0x7f) {
		int32_t subid1 = data->get(3) & 0xff;
		{
			int32_t subid2 = 0;
			switch (subid1) {
			case 8:
				{
					subid2 = data->get(4) & 0xff;
					{
						int32_t ll = 0;
						int32_t r = 0;
						switch (subid2) {
						case 1:
							{
								try {
									$set(this, name, $new($String, data, 6, 16, "ascii"_s));
								} catch ($UnsupportedEncodingException& e) {
									$set(this, name, nullptr);
								}
								int32_t r = 22;
								for (int32_t i = 0; i < 128; ++i) {
									int32_t xx = data->get(r++) & 0xff;
									int32_t yy = data->get(r++) & 0xff;
									int32_t zz = data->get(r++) & 0xff;
									if (!(xx == 127 && yy == 127 && zz == 127)) {
										$nc(this->tuning)->set(i, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
									}
								}
								break;
							}
						case 2:
							{
								int32_t ll = data->get(6) & 0xff;
								int32_t r = 7;
								for (int32_t i = 0; i < ll; ++i) {
									int32_t kk = data->get(r++) & 0xff;
									int32_t xx = data->get(r++) & 0xff;
									int32_t yy = data->get(r++) & 0xff;
									int32_t zz = data->get(r++) & 0xff;
									if (!(xx == 127 && yy == 127 && zz == 127)) {
										$nc(this->tuning)->set(kk, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
									}
								}
								break;
							}
						case 4:
							{
								if (!checksumOK(data)) {
									break;
								}
								try {
									$set(this, name, $new($String, data, 7, 16, "ascii"_s));
								} catch ($UnsupportedEncodingException& e) {
									$set(this, name, nullptr);
								}
								int32_t r = 23;
								for (int32_t i = 0; i < 128; ++i) {
									int32_t xx = data->get(r++) & 0xff;
									int32_t yy = data->get(r++) & 0xff;
									int32_t zz = data->get(r++) & 0xff;
									if (!(xx == 127 && yy == 127 && zz == 127)) {
										$nc(this->tuning)->set(i, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
									}
								}
								break;
							}
						case 5:
							{
								if (!checksumOK(data)) {
									break;
								}
								try {
									$set(this, name, $new($String, data, 7, 16, "ascii"_s));
								} catch ($UnsupportedEncodingException& e) {
									$set(this, name, nullptr);
								}
								$var($ints, octave_tuning, $new($ints, 12));
								for (int32_t i = 0; i < 12; ++i) {
									octave_tuning->set(i, (data->get(i + 23) & 0xff) - 0x40);
								}
								for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
									this->tuning->set(i, (double)(i * 100 + octave_tuning->get(i % 12)));
								}
								break;
							}
						case 6:
							{
								if (!checksumOK(data)) {
									break;
								}
								try {
									$set(this, name, $new($String, data, 7, 16, "ascii"_s));
								} catch ($UnsupportedEncodingException& e) {
									$set(this, name, nullptr);
								}
								$var($doubles, octave_tuning, $new($doubles, 12));
								for (int32_t i = 0; i < 12; ++i) {
									int32_t v = (data->get(i * 2 + 23) & 0xff) * 0x80 + (data->get(i * 2 + 24) & 0xff);
									octave_tuning->set(i, (v / 8192.0 - 1) * 100.0);
								}
								for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
									this->tuning->set(i, i * 100 + octave_tuning->get(i % 12));
								}
								break;
							}
						case 7:
							ll = data->get(7) & 0xff;
							r = 8;
							for (int32_t i = 0; i < ll; ++i) {
								int32_t kk = data->get(r++) & 0xff;
								int32_t xx = data->get(r++) & 0xff;
								int32_t yy = data->get(r++) & 0xff;
								int32_t zz = data->get(r++) & 0xff;
								if (!(xx == 127 && yy == 127 && zz == 127)) {
									$nc(this->tuning)->set(kk, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
								}
							}
							break;
						case 8:
							{
								$var($ints, octave_tuning, $new($ints, 12));
								for (int32_t i = 0; i < 12; ++i) {
									octave_tuning->set(i, (data->get(i + 8) & 0xff) - 0x40);
								}
								for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
									this->tuning->set(i, (double)(i * 100 + octave_tuning->get(i % 12)));
								}
								break;
							}
						case 9:
							{
								$var($doubles, octave_tuning, $new($doubles, 12));
								for (int32_t i = 0; i < 12; ++i) {
									int32_t v = (data->get(i * 2 + 8) & 0xff) * 0x80 + (data->get(i * 2 + 9) & 0xff);
									octave_tuning->set(i, (v / 8192.0 - 1) * 100.0);
								}
								for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
									this->tuning->set(i, i * 100 + octave_tuning->get(i % 12));
								}
								break;
							}
						default:
							break;
						}
					}
				}
			}
		}
	}
}

$doubles* SoftTuning::getTuning() {
	return $Arrays::copyOf(this->tuning, $nc(this->tuning)->length);
}

double SoftTuning::getTuning(int32_t noteNumber) {
	return $nc(this->tuning)->get(noteNumber);
}

$Patch* SoftTuning::getPatch() {
	return this->patch;
}

$String* SoftTuning::getName() {
	return this->name;
}

void SoftTuning::setName($String* name) {
	$set(this, name, name);
}

SoftTuning::SoftTuning() {
}

$Class* SoftTuning::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SoftTuning, name)},
		{"tuning", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftTuning, tuning)},
		{"patch", "Ljavax/sound/midi/Patch;", nullptr, $PRIVATE, $field(SoftTuning, patch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SoftTuning, init$, void)},
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(SoftTuning, init$, void, $bytes*)},
		{"<init>", "(Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC, $method(SoftTuning, init$, void, $Patch*)},
		{"<init>", "(Ljavax/sound/midi/Patch;[B)V", nullptr, $PUBLIC, $method(SoftTuning, init$, void, $Patch*, $bytes*)},
		{"checksumOK", "([B)Z", nullptr, $PRIVATE, $method(SoftTuning, checksumOK, bool, $bytes*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SoftTuning, getName, $String*)},
		{"getPatch", "()Ljavax/sound/midi/Patch;", nullptr, $PUBLIC, $method(SoftTuning, getPatch, $Patch*)},
		{"getTuning", "()[D", nullptr, $PUBLIC, $method(SoftTuning, getTuning, $doubles*)},
		{"getTuning", "(I)D", nullptr, $PUBLIC, $method(SoftTuning, getTuning, double, int32_t)},
		{"load", "([B)V", nullptr, $PUBLIC, $method(SoftTuning, load, void, $bytes*)},
		{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SoftTuning, setName, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftTuning",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SoftTuning, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftTuning);
	});
	return class$;
}

$Class* SoftTuning::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com