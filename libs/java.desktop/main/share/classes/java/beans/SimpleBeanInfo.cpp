#include <java/beans/SimpleBeanInfo.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ImageProducer.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/EventSetDescriptor.h>
#include <java/beans/JavaBean.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $BeanInfoArray = $Array<::java::beans::BeanInfo>;
using $EventSetDescriptorArray = $Array<::java::beans::EventSetDescriptor>;
using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $BeanInfo = ::java::beans::BeanInfo;
using $JavaBean = ::java::beans::JavaBean;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace beans {

class SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0 : public $PrivilegedAction {
	$class(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(SimpleBeanInfo* inst, $String* resourceName) {
		$set(this, inst$, inst);
		$set(this, resourceName, resourceName);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$loadStandardImage$0(resourceName);
	}
	SimpleBeanInfo* inst$ = nullptr;
	$String* resourceName = nullptr;
};
$Class* SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, inst$)},
		{"resourceName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, resourceName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/SimpleBeanInfo;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, init$, void, SimpleBeanInfo*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.beans.SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0);
	});
	return class$;
}
$Class* SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::class$ = nullptr;

void SimpleBeanInfo::init$() {
}

$BeanDescriptor* SimpleBeanInfo::getBeanDescriptor() {
	return nullptr;
}

$PropertyDescriptorArray* SimpleBeanInfo::getPropertyDescriptors() {
	return nullptr;
}

int32_t SimpleBeanInfo::getDefaultPropertyIndex() {
	return -1;
}

$EventSetDescriptorArray* SimpleBeanInfo::getEventSetDescriptors() {
	return nullptr;
}

int32_t SimpleBeanInfo::getDefaultEventIndex() {
	return -1;
}

$MethodDescriptorArray* SimpleBeanInfo::getMethodDescriptors() {
	return nullptr;
}

$BeanInfoArray* SimpleBeanInfo::getAdditionalBeanInfo() {
	return nullptr;
}

$Image* SimpleBeanInfo::getIcon(int32_t iconKind) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($BeanDescriptor, descriptor, getBeanDescriptor());
	if (descriptor != nullptr) {
		$Class* type = descriptor->getBeanClass();
		bool var$0 = type != nullptr && type->getClassLoader() == nullptr;
		$load($JavaBean);
		if (var$0 && type->getAnnotation($JavaBean::class$) != nullptr) {
			$var($String, name, type->getName());
			int32_t index = $nc(name)->lastIndexOf(u'.');
			if ($(name->substring(0, index))->equals("javax.swing"_s)) {
				$var($String, className, type->getSimpleName());
				switch (iconKind) {
				case $BeanInfo::ICON_COLOR_32x32:
					return loadImage(className, "Color32.gif"_s);
				case $BeanInfo::ICON_COLOR_16x16:
					return loadImage(className, "Color16.gif"_s);
				case $BeanInfo::ICON_MONO_32x32:
					return loadImage(className, "Mono32.gif"_s);
				case $BeanInfo::ICON_MONO_16x16:
					return loadImage(className, "Mono16.gif"_s);
				}
			}
		}
	}
	return nullptr;
}

$Image* SimpleBeanInfo::loadStandardImage($String* resourceName) {
	$beforeCallerSensitive();
	return $cast($Image, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0, this, resourceName))));
}

$Image* SimpleBeanInfo::loadImage($String* resourceName, $String* suffix) {
	$useLocalObjectStack();
	$var($String, prefix, "/javax/swing/beaninfo/images/"_s);
	$var($Image, image, loadStandardImage($$str({prefix, resourceName, suffix})));
	return image == nullptr ? loadStandardImage($$str({prefix, "JComponent"_s, suffix})) : image;
}

$Image* SimpleBeanInfo::loadImage($String* resourceName) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($URL, url, $of(this)->getClass()->getResource(resourceName));
		if (url != nullptr) {
			$var($ImageProducer, ip, $cast($ImageProducer, url->getContent()));
			if (ip != nullptr) {
				return $$nc($Toolkit::getDefaultToolkit())->createImage(ip);
			}
		}
	} catch ($Exception& ignored) {
	}
	return nullptr;
}

$Image* SimpleBeanInfo::lambda$loadStandardImage$0($String* resourceName) {
	return loadImage(resourceName);
}

SimpleBeanInfo::SimpleBeanInfo() {
}

$Class* SimpleBeanInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.beans.SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0")) {
			return SimpleBeanInfo$$Lambda$lambda$loadStandardImage$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleBeanInfo, init$, void)},
		{"getAdditionalBeanInfo", "()[Ljava/beans/BeanInfo;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getAdditionalBeanInfo, $BeanInfoArray*)},
		{"getBeanDescriptor", "()Ljava/beans/BeanDescriptor;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getBeanDescriptor, $BeanDescriptor*)},
		{"getDefaultEventIndex", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getDefaultEventIndex, int32_t)},
		{"getDefaultPropertyIndex", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getDefaultPropertyIndex, int32_t)},
		{"getEventSetDescriptors", "()[Ljava/beans/EventSetDescriptor;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getEventSetDescriptors, $EventSetDescriptorArray*)},
		{"getIcon", "(I)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getIcon, $Image*, int32_t)},
		{"getMethodDescriptors", "()[Ljava/beans/MethodDescriptor;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getMethodDescriptors, $MethodDescriptorArray*)},
		{"getPropertyDescriptors", "()[Ljava/beans/PropertyDescriptor;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, getPropertyDescriptors, $PropertyDescriptorArray*)},
		{"lambda$loadStandardImage$0", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE | $SYNTHETIC, $method(SimpleBeanInfo, lambda$loadStandardImage$0, $Image*, $String*)},
		{"loadImage", "(Ljava/lang/String;Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE, $method(SimpleBeanInfo, loadImage, $Image*, $String*, $String*)},
		{"loadImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(SimpleBeanInfo, loadImage, $Image*, $String*)},
		{"loadStandardImage", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE, $method(SimpleBeanInfo, loadStandardImage, $Image*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.SimpleBeanInfo",
		"java.lang.Object",
		"java.beans.BeanInfo",
		nullptr,
		methodInfos$$
	};
	$loadClass(SimpleBeanInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleBeanInfo);
	});
	return class$;
}

$Class* SimpleBeanInfo::class$ = nullptr;

	} // beans
} // java