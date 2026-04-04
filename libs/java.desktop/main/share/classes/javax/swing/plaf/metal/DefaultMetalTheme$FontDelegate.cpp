#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate.h>
#include <java/awt/Font.h>
#include <java/security/AccessController.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate$1.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <jcpp.h>

using $FontUIResourceArray = $Array<::javax::swing::plaf::FontUIResource>;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $DefaultMetalTheme$FontDelegate$1 = ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$ints* DefaultMetalTheme$FontDelegate::defaultMapping = nullptr;

void DefaultMetalTheme$FontDelegate::init$() {
	$set(this, fonts, $new($FontUIResourceArray, 6));
}

$FontUIResource* DefaultMetalTheme$FontDelegate::getFont(int32_t type) {
	$useLocalObjectStack();
	int32_t mappedType = $nc(DefaultMetalTheme$FontDelegate::defaultMapping)->get(type);
	if ($nc(this->fonts)->get(type) == nullptr) {
		$var($Font, f, getPrivilegedFont(mappedType));
		if (f == nullptr) {
			$var($String, var$0, $DefaultMetalTheme::getDefaultFontName(type));
			int32_t var$1 = $DefaultMetalTheme::getDefaultFontStyle(type);
			$assign(f, $new($Font, var$0, var$1, $DefaultMetalTheme::getDefaultFontSize(type)));
		}
		$nc(this->fonts)->set(type, $$new($FontUIResource, f));
	}
	return $nc(this->fonts)->get(type);
}

$Font* DefaultMetalTheme$FontDelegate::getPrivilegedFont(int32_t key) {
	$beforeCallerSensitive();
	return $cast($Font, $AccessController::doPrivileged($$new($DefaultMetalTheme$FontDelegate$1, this, key)));
}

void DefaultMetalTheme$FontDelegate::clinit$($Class* clazz) {
	$assignStatic(DefaultMetalTheme$FontDelegate::defaultMapping, $new($ints, {
		0,
		1,
		2,
		0,
		0,
		5
	}));
}

DefaultMetalTheme$FontDelegate::DefaultMetalTheme$FontDelegate() {
}

$Class* DefaultMetalTheme$FontDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultMapping", "[I", nullptr, $PRIVATE | $STATIC, $staticField(DefaultMetalTheme$FontDelegate, defaultMapping)},
		{"fonts", "[Ljavax/swing/plaf/FontUIResource;", nullptr, 0, $field(DefaultMetalTheme$FontDelegate, fonts)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultMetalTheme$FontDelegate, init$, void)},
		{"getFont", "(I)Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC, $virtualMethod(DefaultMetalTheme$FontDelegate, getFont, $FontUIResource*, int32_t)},
		{"getPrivilegedFont", "(I)Ljava/awt/Font;", nullptr, $PROTECTED, $virtualMethod(DefaultMetalTheme$FontDelegate, getPrivilegedFont, $Font*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "FontDelegate", $PRIVATE | $STATIC},
		{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate",
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
		"javax.swing.plaf.metal.DefaultMetalTheme"
	};
	$loadClass(DefaultMetalTheme$FontDelegate, name, initialize, &classInfo$$, DefaultMetalTheme$FontDelegate::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMetalTheme$FontDelegate);
	});
	return class$;
}

$Class* DefaultMetalTheme$FontDelegate::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax