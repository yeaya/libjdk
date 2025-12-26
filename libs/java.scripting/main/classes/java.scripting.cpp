#include <java.scripting.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <com/sun/tools/script/shell/Main.h>
#include <com/sun/tools/script/shell/Main$1.h>
#include <com/sun/tools/script/shell/Main$2.h>
#include <com/sun/tools/script/shell/Main$3.h>
#include <com/sun/tools/script/shell/Main$Command.h>
#include <javax/script/AbstractScriptEngine.h>
#include <javax/script/Bindings.h>
#include <javax/script/Compilable.h>
#include <javax/script/CompiledScript.h>
#include <javax/script/Invocable.h>
#include <javax/script/ScriptContext.h>
#include <javax/script/ScriptEngine.h>
#include <javax/script/ScriptEngineFactory.h>
#include <javax/script/ScriptEngineManager.h>
#include <javax/script/ScriptException.h>
#include <javax/script/SimpleBindings.h>
#include <javax/script/SimpleScriptContext.h>

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$scripting_classes_[] = {
	$classEntry("com.sun.tools.script.shell.Main", ::com::sun::tools::script::shell::Main),
	$classEntry("com.sun.tools.script.shell.Main$1", ::com::sun::tools::script::shell::Main$1),
	$classEntry("com.sun.tools.script.shell.Main$2", ::com::sun::tools::script::shell::Main$2),
	$classEntry("com.sun.tools.script.shell.Main$3", ::com::sun::tools::script::shell::Main$3),
	$classEntry("com.sun.tools.script.shell.Main$Command", ::com::sun::tools::script::shell::Main$Command),
	$classEntry("javax.script.AbstractScriptEngine", ::javax::script::AbstractScriptEngine),
	$classEntry("javax.script.Bindings", ::javax::script::Bindings),
	$classEntry("javax.script.Compilable", ::javax::script::Compilable),
	$classEntry("javax.script.CompiledScript", ::javax::script::CompiledScript),
	$classEntry("javax.script.Invocable", ::javax::script::Invocable),
	$classEntry("javax.script.ScriptContext", ::javax::script::ScriptContext),
	$classEntry("javax.script.ScriptEngine", ::javax::script::ScriptEngine),
	$classEntry("javax.script.ScriptEngineFactory", ::javax::script::ScriptEngineFactory),
	$classEntry("javax.script.ScriptEngineManager", ::javax::script::ScriptEngineManager),
	$classEntry("javax.script.ScriptException", ::javax::script::ScriptException),
	$classEntry("javax.script.SimpleBindings", ::javax::script::SimpleBindings),
	$classEntry("javax.script.SimpleScriptContext", ::javax::script::SimpleScriptContext)
};

const char* _java$scripting_packages_[] = {
	"com.sun.tools.script.shell",
	"javax.script"
};

void java$scripting$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$scripting_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$scripting_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$scripting$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$scripting$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$scripting$GetPackages() {
	int32_t length = $lengthOf(_java$scripting_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$scripting_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$scripting$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$scripting_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$scripting_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$scripting$GetResource($String* name) {
	return nullptr;
}

void java$scripting::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"java.scripting", "17.35", "",
		&_java$scripting_ModuleInfo_,
		java$scripting$LibEventAction,
		java$scripting$GetPackages,
		java$scripting$GetClassEntry,
		java$scripting$GetResource
	};
	$System::addLibrary(&lib);
}