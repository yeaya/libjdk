#include <sun/swing/ImageIconUIResource.h>
#include <java/awt/Image.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace sun {
	namespace swing {

$String* ImageIconUIResource::toString() {
	return this->$ImageIcon::toString();
}

int32_t ImageIconUIResource::hashCode() {
	return this->$ImageIcon::hashCode();
}

bool ImageIconUIResource::equals(Object$* arg0) {
	return this->$ImageIcon::equals(arg0);
}

$Object* ImageIconUIResource::clone() {
	return this->$ImageIcon::clone();
}

void ImageIconUIResource::finalize() {
	this->$ImageIcon::finalize();
}

void ImageIconUIResource::init$($bytes* imageData) {
	$ImageIcon::init$(imageData);
}

void ImageIconUIResource::init$($Image* image) {
	$ImageIcon::init$(image);
}

ImageIconUIResource::ImageIconUIResource() {
}

$Class* ImageIconUIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(ImageIconUIResource, init$, void, $bytes*)},
		{"<init>", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(ImageIconUIResource, init$, void, $Image*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.ImageIconUIResource",
		"javax.swing.ImageIcon",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageIconUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImageIconUIResource));
	});
	return class$;
}

$Class* ImageIconUIResource::class$ = nullptr;

	} // swing
} // sun