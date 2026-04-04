#include <com/sun/media/sound/SoftMixingSourceDataLine$1.h>
#include <com/sun/media/sound/SoftMixingSourceDataLine.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $SoftMixingSourceDataLine = ::com::sun::media::sound::SoftMixingSourceDataLine;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMixingSourceDataLine$1::init$($SoftMixingSourceDataLine* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
}

int32_t SoftMixingSourceDataLine$1::read() {
	$var($bytes, b, $new($bytes, 1));
	int32_t ret = read(b);
	if (ret < 0) {
		return ret;
	}
	return b->get(0) & 0xff;
}

int32_t SoftMixingSourceDataLine$1::available() {
	$synchronized(this->this$0->cycling_buffer) {
		return this->this$0->cycling_avail;
	}
}

int32_t SoftMixingSourceDataLine$1::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this->this$0->cycling_buffer) {
		if (len > this->this$0->cycling_avail) {
			len = this->this$0->cycling_avail;
		}
		int32_t pos = this->this$0->cycling_read_pos;
		$var($bytes, buff, this->this$0->cycling_buffer);
		int32_t buff_len = $nc(buff)->length;
		for (int32_t i = 0; i < len; ++i) {
			$nc(b)->set(off++, buff->get(pos));
			++pos;
			if (pos == buff_len) {
				pos = 0;
			}
		}
		this->this$0->cycling_read_pos = pos;
		this->this$0->cycling_avail -= len;
		this->this$0->cycling_framepos += $div(len, this->this$0->framesize);
	}
	return len;
}

SoftMixingSourceDataLine$1::SoftMixingSourceDataLine$1() {
}

$Class* SoftMixingSourceDataLine$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMixingSourceDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingSourceDataLine$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMixingSourceDataLine;)V", nullptr, 0, $method(SoftMixingSourceDataLine$1, init$, void, $SoftMixingSourceDataLine*)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(SoftMixingSourceDataLine$1, available, int32_t), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(SoftMixingSourceDataLine$1, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(SoftMixingSourceDataLine$1, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftMixingSourceDataLine",
		"open",
		"(Ljavax/sound/sampled/AudioFormat;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingSourceDataLine$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftMixingSourceDataLine$1",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftMixingSourceDataLine"
	};
	$loadClass(SoftMixingSourceDataLine$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingSourceDataLine$1);
	});
	return class$;
}

$Class* SoftMixingSourceDataLine$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com