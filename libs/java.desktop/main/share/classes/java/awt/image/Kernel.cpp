#include <java/awt/image/Kernel.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

void Kernel::initIDs() {
	$init(Kernel);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void Kernel::init$(int32_t width, int32_t height, $floats* data) {
	$useLocalObjectStack();
	this->width = width;
	this->height = height;
	this->xOrigin = (width - 1) >> 1;
	this->yOrigin = (height - 1) >> 1;
	int32_t len = width * height;
	if ($nc(data)->length < len) {
		$throwNew($IllegalArgumentException, $$str({"Data array too small (is "_s, $$str(data->length), " and should be "_s, $$str(len)}));
	}
	$set(this, data, $new($floats, len));
	$System::arraycopy(data, 0, this->data, 0, len);
}

int32_t Kernel::getXOrigin() {
	return this->xOrigin;
}

int32_t Kernel::getYOrigin() {
	return this->yOrigin;
}

int32_t Kernel::getWidth() {
	return this->width;
}

int32_t Kernel::getHeight() {
	return this->height;
}

$floats* Kernel::getKernelData($floats* data$renamed) {
	$useLocalObjectStack();
	$var($floats, data, data$renamed);
	if (data == nullptr) {
		$assign(data, $new($floats, $nc(this->data)->length));
	} else if (data->length < $nc(this->data)->length) {
		$throwNew($IllegalArgumentException, $$str({"Data array too small (should be "_s, $$str(this->data->length), " but is "_s, $$str(data->length), " )"_s}));
	}
	$System::arraycopy(this->data, 0, data, 0, $nc(this->data)->length);
	return data;
}

$Object* Kernel::clone() {
	try {
		return $Cloneable::clone();
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

void Kernel::clinit$($Class* clazz) {
	{
		$ColorModel::loadLibraries();
		Kernel::initIDs();
	}
}

Kernel::Kernel() {
}

$Class* Kernel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"width", "I", nullptr, $PRIVATE, $field(Kernel, width)},
		{"height", "I", nullptr, $PRIVATE, $field(Kernel, height)},
		{"xOrigin", "I", nullptr, $PRIVATE, $field(Kernel, xOrigin)},
		{"yOrigin", "I", nullptr, $PRIVATE, $field(Kernel, yOrigin)},
		{"data", "[F", nullptr, $PRIVATE, $field(Kernel, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II[F)V", nullptr, $PUBLIC, $method(Kernel, init$, void, int32_t, int32_t, $floats*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Kernel, clone, $Object*)},
		{"getHeight", "()I", nullptr, $PUBLIC | $FINAL, $method(Kernel, getHeight, int32_t)},
		{"getKernelData", "([F)[F", nullptr, $PUBLIC | $FINAL, $method(Kernel, getKernelData, $floats*, $floats*)},
		{"getWidth", "()I", nullptr, $PUBLIC | $FINAL, $method(Kernel, getWidth, int32_t)},
		{"getXOrigin", "()I", nullptr, $PUBLIC | $FINAL, $method(Kernel, getXOrigin, int32_t)},
		{"getYOrigin", "()I", nullptr, $PUBLIC | $FINAL, $method(Kernel, getYOrigin, int32_t)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Kernel, initIDs, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.image.Kernel",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Kernel, name, initialize, &classInfo$$, Kernel::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Kernel);
	});
	return class$;
}

$Class* Kernel::class$ = nullptr;

		} // image
	} // awt
} // java