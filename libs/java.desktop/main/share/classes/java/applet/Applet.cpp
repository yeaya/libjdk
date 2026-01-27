#include <java/applet/Applet.h>

#include <com/sun/media/sound/JavaSoundAudioClip.h>
#include <java/applet/Applet$AccessibleApplet.h>
#include <java/applet/AppletContext.h>
#include <java/applet/AppletStub.h>
#include <java/applet/AudioClip.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Image.h>
#include <java/awt/Panel$AccessibleAWTPanel.h>
#include <java/awt/Panel.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/SecurityManager.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $JavaSoundAudioClip = ::com::sun::media::sound::JavaSoundAudioClip;
using $Applet$AccessibleApplet = ::java::applet::Applet$AccessibleApplet;
using $AppletContext = ::java::applet::AppletContext;
using $AppletStub = ::java::applet::AppletStub;
using $AudioClip = ::java::applet::AudioClip;
using $AWTPermission = ::java::awt::AWTPermission;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Image = ::java::awt::Image;
using $Panel = ::java::awt::Panel;
using $Panel$AccessibleAWTPanel = ::java::awt::Panel$AccessibleAWTPanel;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityManager = ::java::lang::SecurityManager;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace java {
	namespace applet {

$NamedAttribute Applet_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Applet_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Applet_Attribute_var$0},
	{}
};

$FieldInfo _Applet_FieldInfo_[] = {
	{"stub", "Ljava/applet/AppletStub;", nullptr, $PRIVATE | $TRANSIENT, $field(Applet, stub)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Applet, serialVersionUID)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, 0, $field(Applet, accessibleContext)},
	{}
};

$MethodInfo _Applet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Applet, init$, void), "java.awt.HeadlessException"},
	{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(Applet, destroy, void)},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(Applet, getAccessibleContext, $AccessibleContext*)},
	{"getAppletContext", "()Ljava/applet/AppletContext;", nullptr, $PUBLIC, $virtualMethod(Applet, getAppletContext, $AppletContext*)},
	{"getAppletInfo", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Applet, getAppletInfo, $String*)},
	{"getAudioClip", "(Ljava/net/URL;)Ljava/applet/AudioClip;", nullptr, $PUBLIC, $virtualMethod(Applet, getAudioClip, $AudioClip*, $URL*)},
	{"getAudioClip", "(Ljava/net/URL;Ljava/lang/String;)Ljava/applet/AudioClip;", nullptr, $PUBLIC, $virtualMethod(Applet, getAudioClip, $AudioClip*, $URL*, $String*)},
	{"getCodeBase", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Applet, getCodeBase, $URL*)},
	{"getDocumentBase", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Applet, getDocumentBase, $URL*)},
	{"getImage", "(Ljava/net/URL;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(Applet, getImage, $Image*, $URL*)},
	{"getImage", "(Ljava/net/URL;Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(Applet, getImage, $Image*, $URL*, $String*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(Applet, getLocale, $Locale*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Applet, getParameter, $String*, $String*)},
	{"getParameterInfo", "()[[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Applet, getParameterInfo, $StringArray2*)},
	{"init", "()V", nullptr, $PUBLIC, $virtualMethod(Applet, init, void)},
	{"isActive", "()Z", nullptr, $PUBLIC, $virtualMethod(Applet, isActive, bool)},
	{"isValidateRoot", "()Z", nullptr, $PUBLIC, $virtualMethod(Applet, isValidateRoot, bool)},
	{"newAudioClip", "(Ljava/net/URL;)Ljava/applet/AudioClip;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Applet, newAudioClip, $AudioClip*, $URL*)},
	{"play", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $virtualMethod(Applet, play, void, $URL*)},
	{"play", "(Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Applet, play, void, $URL*, $String*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(Applet, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"resize", "(II)V", nullptr, $PUBLIC, $virtualMethod(Applet, resize, void, int32_t, int32_t)},
	{"resize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(Applet, resize, void, $Dimension*)},
	{"setStub", "(Ljava/applet/AppletStub;)V", nullptr, $PUBLIC | $FINAL, $method(Applet, setStub, void, $AppletStub*)},
	{"showStatus", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Applet, showStatus, void, $String*)},
	{"start", "()V", nullptr, $PUBLIC, $virtualMethod(Applet, start, void)},
	{"stop", "()V", nullptr, $PUBLIC, $virtualMethod(Applet, stop, void)},
	{}
};

$InnerClassInfo _Applet_InnerClassesInfo_[] = {
	{"java.applet.Applet$AccessibleApplet", "java.applet.Applet", "AccessibleApplet", $PROTECTED},
	{}
};

$ClassInfo _Applet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.applet.Applet",
	"java.awt.Panel",
	nullptr,
	_Applet_FieldInfo_,
	_Applet_MethodInfo_,
	nullptr,
	nullptr,
	_Applet_InnerClassesInfo_,
	_Applet_Annotations_,
	nullptr,
	"java.applet.Applet$AccessibleApplet"
};

$Object* allocate$Applet($Class* clazz) {
	return $of($alloc(Applet));
}

void Applet::init$() {
	$Panel::init$();
	$set(this, accessibleContext, nullptr);
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
}

void Applet::readObject($ObjectInputStream* s) {
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	$nc(s)->defaultReadObject();
}

void Applet::setStub($AppletStub* stub) {
	$useLocalCurrentObjectStackCache();
	if (this->stub != nullptr) {
		$var($SecurityManager, s, $System::getSecurityManager());
		if (s != nullptr) {
			s->checkPermission($$new($AWTPermission, "setAppletStub"_s));
		}
	}
	$set(this, stub, stub);
}

bool Applet::isActive() {
	if (this->stub != nullptr) {
		return $nc(this->stub)->isActive();
	} else {
		return false;
	}
}

$URL* Applet::getDocumentBase() {
	return $nc(this->stub)->getDocumentBase();
}

$URL* Applet::getCodeBase() {
	return $nc(this->stub)->getCodeBase();
}

$String* Applet::getParameter($String* name) {
	return $nc(this->stub)->getParameter(name);
}

$AppletContext* Applet::getAppletContext() {
	return $nc(this->stub)->getAppletContext();
}

void Applet::resize(int32_t width, int32_t height) {
	$var($Dimension, d, size());
	if (($nc(d)->width != width) || ($nc(d)->height != height)) {
		$Panel::resize(width, height);
		if (this->stub != nullptr) {
			$nc(this->stub)->appletResize(width, height);
		}
	}
}

void Applet::resize($Dimension* d) {
	resize($nc(d)->width, d->height);
}

bool Applet::isValidateRoot() {
	return true;
}

void Applet::showStatus($String* msg) {
	$nc($(getAppletContext()))->showStatus(msg);
}

$Image* Applet::getImage($URL* url) {
	return $nc($(getAppletContext()))->getImage(url);
}

$Image* Applet::getImage($URL* url, $String* name) {
	try {
		return getImage($$new($URL, url, name));
	} catch ($MalformedURLException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$AudioClip* Applet::newAudioClip($URL* url) {
	$init(Applet);
	return $JavaSoundAudioClip::create(url);
}

$AudioClip* Applet::getAudioClip($URL* url) {
	return $nc($(getAppletContext()))->getAudioClip(url);
}

$AudioClip* Applet::getAudioClip($URL* url, $String* name) {
	try {
		return getAudioClip($$new($URL, url, name));
	} catch ($MalformedURLException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* Applet::getAppletInfo() {
	return nullptr;
}

$Locale* Applet::getLocale() {
	$var($Locale, locale, $Panel::getLocale());
	if (locale == nullptr) {
		return $Locale::getDefault();
	}
	return locale;
}

$StringArray2* Applet::getParameterInfo() {
	return nullptr;
}

void Applet::play($URL* url) {
	$var($AudioClip, clip, getAudioClip(url));
	if (clip != nullptr) {
		clip->play();
	}
}

void Applet::play($URL* url, $String* name) {
	$var($AudioClip, clip, getAudioClip(url, name));
	if (clip != nullptr) {
		clip->play();
	}
}

void Applet::init() {
}

void Applet::start() {
}

void Applet::stop() {
}

void Applet::destroy() {
}

$AccessibleContext* Applet::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Applet$AccessibleApplet, this));
	}
	return this->accessibleContext;
}

Applet::Applet() {
}

$Class* Applet::load$($String* name, bool initialize) {
	$loadClass(Applet, name, initialize, &_Applet_ClassInfo_, allocate$Applet);
	return class$;
}

$Class* Applet::class$ = nullptr;

	} // applet
} // java