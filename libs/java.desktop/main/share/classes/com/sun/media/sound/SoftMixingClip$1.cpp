#include <com/sun/media/sound/SoftMixingClip$1.h>
#include <com/sun/media/sound/SoftMixingClip.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $SoftMixingClip = ::com::sun::media::sound::SoftMixingClip;
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

void SoftMixingClip$1::init$($SoftMixingClip* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
}

int32_t SoftMixingClip$1::read() {
	$var($bytes, b, $new($bytes, 1));
	int32_t ret = read(b);
	if (ret < 0) {
		return ret;
	}
	return b->get(0) & 0xff;
}

int32_t SoftMixingClip$1::read($bytes* b, int32_t off, int32_t len) {
	if (this->this$0->_loopcount != 0) {
		int32_t bloopend = this->this$0->_loopend * this->this$0->framesize;
		int32_t bloopstart = this->this$0->_loopstart * this->this$0->framesize;
		int32_t pos = this->this$0->_frameposition * this->this$0->framesize;
		if (pos + len >= bloopend) {
			if (pos < bloopend) {
				int32_t offend = off + len;
				int32_t o = off;
				while (off != offend) {
					if (pos == bloopend) {
						if (this->this$0->_loopcount == 0) {
							break;
						}
						pos = bloopstart;
						if (this->this$0->_loopcount != -1) {
							--this->this$0->_loopcount;
						}
					}
					len = offend - off;
					int32_t left = bloopend - pos;
					if (len > left) {
						len = left;
					}
					$System::arraycopy(this->this$0->data, pos, b, off, len);
					off += len;
				}
				if (this->this$0->_loopcount == 0) {
					len = offend - off;
					int32_t left = bloopend - pos;
					if (len > left) {
						len = left;
					}
					$System::arraycopy(this->this$0->data, pos, b, off, len);
					off += len;
				}
				this->this$0->_frameposition = $div(pos, this->this$0->framesize);
				return o - off;
			}
		}
	}
	int32_t pos = this->this$0->_frameposition * this->this$0->framesize;
	int32_t left = this->this$0->bufferSize - pos;
	if (left == 0) {
		return -1;
	}
	if (len > left) {
		len = left;
	}
	$System::arraycopy(this->this$0->data, pos, b, off, len);
	this->this$0->_frameposition += $div(len, this->this$0->framesize);
	return len;
}

SoftMixingClip$1::SoftMixingClip$1() {
}

$Class* SoftMixingClip$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMixingClip;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingClip$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMixingClip;)V", nullptr, 0, $method(SoftMixingClip$1, init$, void, $SoftMixingClip*)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(SoftMixingClip$1, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(SoftMixingClip$1, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftMixingClip",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMixingClip$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftMixingClip$1",
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
		"com.sun.media.sound.SoftMixingClip"
	};
	$loadClass(SoftMixingClip$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingClip$1);
	});
	return class$;
}

$Class* SoftMixingClip$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com