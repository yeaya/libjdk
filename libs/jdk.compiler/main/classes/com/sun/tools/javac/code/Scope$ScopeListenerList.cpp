#include <com/sun/tools/javac/code/Scope$ScopeListenerList.h>
#include <com/sun/tools/javac/code/Scope$ScopeListener.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ScopeListener = ::com::sun::tools::javac::code::Scope$ScopeListener;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Scope$ScopeListenerList::init$() {
	$set(this, listeners, $List::nil());
}

void Scope$ScopeListenerList::add($Scope$ScopeListener* sl) {
	$set(this, listeners, $nc(this->listeners)->prepend($$new($WeakReference, sl)));
}

void Scope$ScopeListenerList::symbolAdded($Symbol* sym, $Scope* scope) {
	walkReferences(sym, scope, false);
}

void Scope$ScopeListenerList::symbolRemoved($Symbol* sym, $Scope* scope) {
	walkReferences(sym, scope, true);
}

void Scope$ScopeListenerList::walkReferences($Symbol* sym, $Scope* scope, bool isRemove) {
	$useLocalObjectStack();
	$var($ListBuffer, newListeners, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->listeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($WeakReference, wsl, $cast($WeakReference, i$->next()));
			{
				$var($Scope$ScopeListener, sl, $cast($Scope$ScopeListener, $nc(wsl)->get()));
				if (sl != nullptr) {
					if (isRemove) {
						sl->symbolRemoved(sym, scope);
					} else {
						sl->symbolAdded(sym, scope);
					}
					newListeners->add(wsl);
				}
			}
		}
	}
	$set(this, listeners, newListeners->toList());
}

Scope$ScopeListenerList::Scope$ScopeListenerList() {
}

$Class* Scope$ScopeListenerList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listeners", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/lang/ref/WeakReference<Lcom/sun/tools/javac/code/Scope$ScopeListener;>;>;", 0, $field(Scope$ScopeListenerList, listeners)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Scope$ScopeListenerList, init$, void)},
		{"add", "(Lcom/sun/tools/javac/code/Scope$ScopeListener;)V", nullptr, 0, $virtualMethod(Scope$ScopeListenerList, add, void, $Scope$ScopeListener*)},
		{"symbolAdded", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0, $virtualMethod(Scope$ScopeListenerList, symbolAdded, void, $Symbol*, $Scope*)},
		{"symbolRemoved", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, 0, $virtualMethod(Scope$ScopeListenerList, symbolRemoved, void, $Symbol*, $Scope*)},
		{"walkReferences", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;Z)V", nullptr, $PRIVATE, $method(Scope$ScopeListenerList, walkReferences, void, $Symbol*, $Scope*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$ScopeListenerList", "com.sun.tools.javac.code.Scope", "ScopeListenerList", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Scope$ScopeListenerList",
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
		"com.sun.tools.javac.code.Scope"
	};
	$loadClass(Scope$ScopeListenerList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ScopeListenerList);
	});
	return class$;
}

$Class* Scope$ScopeListenerList::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com