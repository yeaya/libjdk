#include <javax/swing/UIManager$1.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Properties.h>
#include <javax/swing/UIManager.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <jcpp.h>

#undef MACOSX

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Properties = ::java::util::Properties;
using $UIManager = ::javax::swing::UIManager;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;

namespace javax {
	namespace swing {

void UIManager$1::init$($Properties* val$props) {
	$set(this, val$props, val$props);
}

$Object* UIManager$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$OSInfo$OSType* osType = $cast($OSInfo$OSType, $AccessController::doPrivileged($($OSInfo::getOSTypeAction())));
	$init($OSInfo$OSType);
	if (osType == $OSInfo$OSType::MACOSX) {
		$nc(this->val$props)->put("swing.defaultlaf"_s, $($UIManager::getSystemLookAndFeelClassName()));
	}
	try {
		$var($File, file, $new($File, $($UIManager::makeSwingPropertiesFilename())));
		if (file->exists()) {
			$var($FileInputStream, ins, $new($FileInputStream, file));
			$nc(this->val$props)->load(ins);
			ins->close();
		}
	} catch ($Exception& e) {
	}
	$UIManager::checkProperty(this->val$props, "swing.defaultlaf"_s);
	$UIManager::checkProperty(this->val$props, "swing.auxiliarylaf"_s);
	$UIManager::checkProperty(this->val$props, "swing.plaf.multiplexinglaf"_s);
	$UIManager::checkProperty(this->val$props, "swing.installedlafs"_s);
	$UIManager::checkProperty(this->val$props, "swing.disablenavaids"_s);
	return nullptr;
}

UIManager$1::UIManager$1() {
}

$Class* UIManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$props", "Ljava/util/Properties;", nullptr, $FINAL | $SYNTHETIC, $field(UIManager$1, val$props)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Properties;)V", "()V", 0, $method(UIManager$1, init$, void, $Properties*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UIManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.UIManager",
		"loadSwingProperties",
		"()Ljava/util/Properties;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.UIManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.UIManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.UIManager"
	};
	$loadClass(UIManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIManager$1);
	});
	return class$;
}

$Class* UIManager$1::class$ = nullptr;

	} // swing
} // javax