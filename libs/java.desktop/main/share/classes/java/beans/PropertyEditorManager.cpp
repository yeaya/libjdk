#include <java/beans/PropertyEditorManager.h>

#include <com/sun/beans/finder/PropertyEditorFinder.h>
#include <java/beans/PropertyEditor.h>
#include <java/beans/ThreadGroupContext.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $PropertyEditorFinder = ::com::sun::beans::finder::PropertyEditorFinder;
using $PropertyEditor = ::java::beans::PropertyEditor;
using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

namespace java {
	namespace beans {

$MethodInfo _PropertyEditorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PropertyEditorManager, init$, void)},
	{"findEditor", "(Ljava/lang/Class;)Ljava/beans/PropertyEditor;", "(Ljava/lang/Class<*>;)Ljava/beans/PropertyEditor;", $PUBLIC | $STATIC, $staticMethod(PropertyEditorManager, findEditor, $PropertyEditor*, $Class*)},
	{"getEditorSearchPath", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PropertyEditorManager, getEditorSearchPath, $StringArray*)},
	{"registerEditor", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $staticMethod(PropertyEditorManager, registerEditor, void, $Class*, $Class*)},
	{"setEditorSearchPath", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PropertyEditorManager, setEditorSearchPath, void, $StringArray*)},
	{}
};

$ClassInfo _PropertyEditorManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyEditorManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PropertyEditorManager_MethodInfo_
};

$Object* allocate$PropertyEditorManager($Class* clazz) {
	return $of($alloc(PropertyEditorManager));
}

void PropertyEditorManager::init$() {
}

void PropertyEditorManager::registerEditor($Class* targetType, $Class* editorClass) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->register$(targetType, editorClass);
}

$PropertyEditor* PropertyEditorManager::findEditor($Class* targetType) {
	$useLocalCurrentObjectStackCache();
	return $cast($PropertyEditor, $nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->find(targetType));
}

$StringArray* PropertyEditorManager::getEditorSearchPath() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->getPackages();
}

void PropertyEditorManager::setEditorSearchPath($StringArray* path) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->setPackages(path);
}

PropertyEditorManager::PropertyEditorManager() {
}

$Class* PropertyEditorManager::load$($String* name, bool initialize) {
	$loadClass(PropertyEditorManager, name, initialize, &_PropertyEditorManager_ClassInfo_, allocate$PropertyEditorManager);
	return class$;
}

$Class* PropertyEditorManager::class$ = nullptr;

	} // beans
} // java