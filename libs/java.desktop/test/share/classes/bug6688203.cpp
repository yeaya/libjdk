#include <bug6688203.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/lang/reflect/Field.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

void bug6688203::init$() {
}

void bug6688203::main($StringArray* args) {
	$useLocalObjectStack();
	$load(bug6688203);
	$beforeCallerSensitive();
	$FileSystemView::getFileSystemView();
	int32_t startCount = $nc($($UIManager::getPropertyChangeListeners()))->length;
	for (int32_t i = 0; i < 100; ++i) {
		$FileSystemView::getFileSystemView();
	}
	if (startCount != $nc($($UIManager::getPropertyChangeListeners()))->length) {
		$throwNew($RuntimeException, "New listeners were added into UIManager"_s);
	}
	$var($FileSystemView, fileSystemView, $FileSystemView::getFileSystemView());
	$var($File, file, $new($File, "Some file"_s));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lafInfo, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(lafInfo)->getClassName()));
				} catch ($Exception& e) {
					$nc($System::out)->println($$str({"Cannot set LAF "_s, $($nc(lafInfo)->getName())}));
					continue;
				}
				$nc(fileSystemView)->getSystemDisplayName(file);
				try {
					$var($Field, field, $FileSystemView::class$->getDeclaredField("useSystemExtensionHiding"_s));
					$nc(field)->setAccessible(true);
					$var($Boolean, value, $Boolean::valueOf(field->getBoolean(fileSystemView)));
					bool var$0 = value->booleanValue();
					if (var$0 != $$nc($UIManager::getDefaults())->getBoolean("FileChooser.useSystemExtensionHiding"_s)) {
						$throwNew($RuntimeException, "Invalid cached value of the FileSystemView.useSystemExtensionHiding field"_s);
					}
				} catch ($Exception& e) {
					$throwNew($RuntimeException, "Cannot read the FileSystemView.useSystemExtensionHiding field"_s, e);
				}
			}
		}
	}
}

bug6688203::bug6688203() {
}

$Class* bug6688203::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6688203, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6688203, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6688203",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6688203, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6688203);
	});
	return class$;
}

$Class* bug6688203::class$ = nullptr;