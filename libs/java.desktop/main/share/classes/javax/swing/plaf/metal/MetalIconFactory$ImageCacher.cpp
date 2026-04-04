#include <javax/swing/plaf/metal/MetalIconFactory$ImageCacher.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/swing/plaf/metal/MetalIconFactory$ImageCacher$ImageGcPair.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $MetalIconFactory$ImageCacher$ImageGcPair = ::javax::swing::plaf::metal::MetalIconFactory$ImageCacher$ImageGcPair;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalIconFactory$ImageCacher::init$() {
	$set(this, images, $new($Vector, 1, 1));
}

$Image* MetalIconFactory$ImageCacher::getImage($GraphicsConfiguration* newGC) {
	$useLocalObjectStack();
	if ((this->currentImageGcPair == nullptr) || !(this->currentImageGcPair->hasSameConfiguration(newGC))) {
		$var($Iterator, i$, $nc(this->images)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MetalIconFactory$ImageCacher$ImageGcPair, imgGcPair, $cast($MetalIconFactory$ImageCacher$ImageGcPair, i$->next()));
			if ($nc(imgGcPair)->hasSameConfiguration(newGC)) {
				$set(this, currentImageGcPair, imgGcPair);
				return imgGcPair->image;
			}
		}
		return nullptr;
	}
	return $nc(this->currentImageGcPair)->image;
}

void MetalIconFactory$ImageCacher::cacheImage($Image* image, $GraphicsConfiguration* gc) {
	$var($MetalIconFactory$ImageCacher$ImageGcPair, imgGcPair, $new($MetalIconFactory$ImageCacher$ImageGcPair, this, image, gc));
	$nc(this->images)->addElement(imgGcPair);
	$set(this, currentImageGcPair, imgGcPair);
}

MetalIconFactory$ImageCacher::MetalIconFactory$ImageCacher() {
}

$Class* MetalIconFactory$ImageCacher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"images", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/plaf/metal/MetalIconFactory$ImageCacher$ImageGcPair;>;", 0, $field(MetalIconFactory$ImageCacher, images)},
		{"currentImageGcPair", "Ljavax/swing/plaf/metal/MetalIconFactory$ImageCacher$ImageGcPair;", nullptr, 0, $field(MetalIconFactory$ImageCacher, currentImageGcPair)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetalIconFactory$ImageCacher, init$, void)},
		{"cacheImage", "(Ljava/awt/Image;Ljava/awt/GraphicsConfiguration;)V", nullptr, 0, $virtualMethod(MetalIconFactory$ImageCacher, cacheImage, void, $Image*, $GraphicsConfiguration*)},
		{"getImage", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/Image;", nullptr, 0, $virtualMethod(MetalIconFactory$ImageCacher, getImage, $Image*, $GraphicsConfiguration*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalIconFactory$ImageCacher", "javax.swing.plaf.metal.MetalIconFactory", "ImageCacher", $STATIC},
		{"javax.swing.plaf.metal.MetalIconFactory$ImageCacher$ImageGcPair", "javax.swing.plaf.metal.MetalIconFactory$ImageCacher", "ImageGcPair", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalIconFactory$ImageCacher",
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
		"javax.swing.plaf.metal.MetalIconFactory"
	};
	$loadClass(MetalIconFactory$ImageCacher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalIconFactory$ImageCacher);
	});
	return class$;
}

$Class* MetalIconFactory$ImageCacher::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax