#include <java/awt/ImageMediaEntry.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/MediaEntry.h>
#include <java/awt/MediaTracker.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

#undef ABORT
#undef ABORTED
#undef ALLBITS
#undef COMPLETE
#undef ERROR
#undef ERRORED
#undef FRAMEBITS
#undef LOADING

using $Image = ::java::awt::Image;
using $MediaEntry = ::java::awt::MediaEntry;
using $MediaTracker = ::java::awt::MediaTracker;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

int32_t ImageMediaEntry::hashCode() {
	return this->$MediaEntry::hashCode();
}

bool ImageMediaEntry::equals(Object$* arg0) {
	return this->$MediaEntry::equals(arg0);
}

$Object* ImageMediaEntry::clone() {
	return this->$MediaEntry::clone();
}

$String* ImageMediaEntry::toString() {
	return this->$MediaEntry::toString();
}

void ImageMediaEntry::finalize() {
	this->$MediaEntry::finalize();
}

void ImageMediaEntry::init$($MediaTracker* mt, $Image* img, int32_t c, int32_t w, int32_t h) {
	$MediaEntry::init$(mt, c);
	$set(this, image, img);
	this->width = w;
	this->height = h;
}

bool ImageMediaEntry::matches($Image* img, int32_t w, int32_t h) {
	return (this->image == img && this->width == w && this->height == h);
}

$Object* ImageMediaEntry::getMedia() {
	return this->image;
}

int32_t ImageMediaEntry::getStatus(bool doLoad, bool doVerify) {
	$synchronized(this) {
		if (doVerify) {
			int32_t flags = $nc($nc(this->tracker)->target)->checkImage(this->image, this->width, this->height, nullptr);
			int32_t s = parseflags(flags);
			if (s == 0) {
				if ((this->status & ($MediaEntry::ERRORED | $MediaEntry::COMPLETE)) != 0) {
					setStatus($MediaEntry::ABORTED);
				}
			} else if (s != this->status) {
				setStatus(s);
			}
		}
		return $MediaEntry::getStatus(doLoad, doVerify);
	}
}

void ImageMediaEntry::startLoad() {
	if ($nc($nc(this->tracker)->target)->prepareImage(this->image, this->width, this->height, this)) {
		setStatus($MediaEntry::COMPLETE);
	}
}

int32_t ImageMediaEntry::parseflags(int32_t infoflags) {
	if ((infoflags & $ImageObserver::ERROR) != 0) {
		return $MediaEntry::ERRORED;
	} else if ((infoflags & $ImageObserver::ABORT) != 0) {
		return $MediaEntry::ABORTED;
	} else if ((infoflags & ($ImageObserver::ALLBITS | $ImageObserver::FRAMEBITS)) != 0) {
		return $MediaEntry::COMPLETE;
	}
	return 0;
}

bool ImageMediaEntry::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (this->cancelled) {
		return false;
	}
	int32_t s = parseflags(infoflags);
	if (s != 0 && s != this->status) {
		setStatus(s);
	}
	return ((this->status & $MediaEntry::LOADING) != 0);
}

ImageMediaEntry::ImageMediaEntry() {
}

$Class* ImageMediaEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"image", "Ljava/awt/Image;", nullptr, 0, $field(ImageMediaEntry, image)},
		{"width", "I", nullptr, 0, $field(ImageMediaEntry, width)},
		{"height", "I", nullptr, 0, $field(ImageMediaEntry, height)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ImageMediaEntry, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/MediaTracker;Ljava/awt/Image;III)V", nullptr, 0, $method(ImageMediaEntry, init$, void, $MediaTracker*, $Image*, int32_t, int32_t, int32_t)},
		{"getMedia", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(ImageMediaEntry, getMedia, $Object*)},
		{"getStatus", "(ZZ)I", nullptr, $SYNCHRONIZED, $virtualMethod(ImageMediaEntry, getStatus, int32_t, bool, bool)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(ImageMediaEntry, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"matches", "(Ljava/awt/Image;II)Z", nullptr, 0, $virtualMethod(ImageMediaEntry, matches, bool, $Image*, int32_t, int32_t)},
		{"parseflags", "(I)I", nullptr, 0, $virtualMethod(ImageMediaEntry, parseflags, int32_t, int32_t)},
		{"startLoad", "()V", nullptr, 0, $virtualMethod(ImageMediaEntry, startLoad, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.ImageMediaEntry",
		"java.awt.MediaEntry",
		"java.awt.image.ImageObserver,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ImageMediaEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageMediaEntry));
	});
	return class$;
}

$Class* ImageMediaEntry::class$ = nullptr;

	} // awt
} // java