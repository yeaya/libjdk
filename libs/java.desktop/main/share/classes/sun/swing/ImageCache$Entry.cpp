#include <sun/swing/ImageCache$Entry.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <sun/swing/ImageCache.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

void ImageCache$Entry::init$($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$set(this, config, config);
	$set(this, args, args);
	this->w = w;
	this->h = h;
}

void ImageCache$Entry::setImage($Image* image) {
	$set(this, image, image);
}

$Image* ImageCache$Entry::getImage() {
	return this->image;
}

$String* ImageCache$Entry::toString() {
	$useLocalObjectStack();
	$var($String, value, $str({$($Object::toString()), "[ graphicsConfig="_s, this->config, ", image="_s, this->image, ", w="_s, $$str(this->w), ", h="_s, $$str(this->h)}));
	if (this->args != nullptr) {
		for (int32_t counter = 0; counter < this->args->length; ++counter) {
			$plusAssign(value, $$str({", "_s, this->args->get(counter)}));
		}
	}
	$plusAssign(value, "]"_s);
	return value;
}

bool ImageCache$Entry::equals($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalObjectStack();
	if (this->w == w && this->h == h && ((this->config != nullptr && this->config->equals(config)) || (this->config == nullptr && config == nullptr))) {
		if (this->args == nullptr && args == nullptr) {
			return true;
		}
		if (this->args != nullptr && args != nullptr && this->args->length == args->length) {
			for (int32_t counter = args->length - 1; counter >= 0; --counter) {
				$var($Object0, a1, this->args->get(counter));
				$var($Object0, a2, args->get(counter));
				if ((a1 == nullptr && a2 != nullptr) || (a1 != nullptr && !a1->equals(a2))) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

ImageCache$Entry::ImageCache$Entry() {
}

$Class* ImageCache$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, config)},
		{"w", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, w)},
		{"h", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, h)},
		{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, args)},
		{"image", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(ImageCache$Entry, image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)V", nullptr, 0, $method(ImageCache$Entry, init$, void, $GraphicsConfiguration*, int32_t, int32_t, $ObjectArray*)},
		{"equals", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImageCache$Entry, equals, bool, $GraphicsConfiguration*, int32_t, int32_t, $ObjectArray*)},
		{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(ImageCache$Entry, getImage, $Image*)},
		{"setImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $virtualMethod(ImageCache$Entry, setImage, void, $Image*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImageCache$Entry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.ImageCache$Entry", "sun.swing.ImageCache", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.ImageCache$Entry",
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
		"sun.swing.ImageCache"
	};
	$loadClass(ImageCache$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageCache$Entry);
	});
	return class$;
}

$Class* ImageCache$Entry::class$ = nullptr;

	} // swing
} // sun