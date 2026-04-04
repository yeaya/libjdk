#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate$1.h>
#include <java/awt/Font.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $DefaultMetalTheme$FontDelegate = ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void DefaultMetalTheme$FontDelegate$1::init$($DefaultMetalTheme$FontDelegate* this$0, int32_t val$key) {
	$set(this, this$0, this$0);
	this->val$key = val$key;
}

$Object* DefaultMetalTheme$FontDelegate$1::run() {
	return $Font::getFont($($DefaultMetalTheme::getDefaultPropertyName(this->val$key)));
}

DefaultMetalTheme$FontDelegate$1::DefaultMetalTheme$FontDelegate$1() {
}

$Class* DefaultMetalTheme$FontDelegate$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/DefaultMetalTheme$FontDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMetalTheme$FontDelegate$1, this$0)},
		{"val$key", "I", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMetalTheme$FontDelegate$1, val$key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/DefaultMetalTheme$FontDelegate;I)V", "()V", 0, $method(DefaultMetalTheme$FontDelegate$1, init$, void, $DefaultMetalTheme$FontDelegate*, int32_t)},
		{"run", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(DefaultMetalTheme$FontDelegate$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate",
		"getPrivilegedFont",
		"(I)Ljava/awt/Font;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "FontDelegate", $PRIVATE | $STATIC},
		{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Font;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.DefaultMetalTheme"
	};
	$loadClass(DefaultMetalTheme$FontDelegate$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMetalTheme$FontDelegate$1);
	});
	return class$;
}

$Class* DefaultMetalTheme$FontDelegate$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax