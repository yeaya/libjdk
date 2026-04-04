#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/lang/ClassCastException.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingContainerOrderFocusTraversalPolicy.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL
#undef FINE
#undef FORWARD_TRAVERSAL

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $SwingContainerOrderFocusTraversalPolicy = ::javax::swing::SwingContainerOrderFocusTraversalPolicy;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace javax {
	namespace swing {

$SwingContainerOrderFocusTraversalPolicy* SortingFocusTraversalPolicy::fitnessTestPolicy = nullptr;
bool SortingFocusTraversalPolicy::legacySortingFTPEnabled = false;

void SortingFocusTraversalPolicy::init$() {
	$InternalFrameFocusTraversalPolicy::init$();
	this->implicitDownCycleTraversal = true;
	$set(this, log, $PlatformLogger::getLogger("javax.swing.SortingFocusTraversalPolicy"_s));
}

void SortingFocusTraversalPolicy::init$($Comparator* comparator) {
	$InternalFrameFocusTraversalPolicy::init$();
	this->implicitDownCycleTraversal = true;
	$set(this, log, $PlatformLogger::getLogger("javax.swing.SortingFocusTraversalPolicy"_s));
	$set(this, comparator, comparator);
}

$List* SortingFocusTraversalPolicy::getFocusTraversalCycle($Container* aContainer) {
	$var($List, cycle, $new($ArrayList));
	enumerateAndSortCycle(aContainer, cycle);
	return cycle;
}

int32_t SortingFocusTraversalPolicy::getComponentIndex($List* cycle, $Component* aComponent) {
	int32_t index = 0;
	try {
		index = $Collections::binarySearch(cycle, aComponent, this->comparator);
	} catch ($ClassCastException& e) {
		$init($PlatformLogger$Level);
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### During the binary search for "_s, aComponent, " the exception occurred: "_s}), e);
		}
		return -1;
	}
	if (index < 0) {
		index = $nc(cycle)->indexOf(aComponent);
	}
	return index;
}

void SortingFocusTraversalPolicy::enumerateAndSortCycle($Container* focusCycleRoot, $List* cycle) {
	if ($nc(focusCycleRoot)->isShowing()) {
		enumerateCycle(focusCycleRoot, cycle);
		if (SortingFocusTraversalPolicy::legacySortingFTPEnabled) {
			legacySort(cycle, this->comparator);
		} else {
			$nc(cycle)->sort(this->comparator);
		}
	}
}

void SortingFocusTraversalPolicy::legacySort($List* l, $Comparator* c) {
	$useLocalObjectStack();
	if (c != nullptr && $nc(l)->size() > 1) {
		$var($ComponentArray, a, $cast($ComponentArray, l->toArray($$new($ComponentArray, l->size()))));
		mergeSort($$cast($ComponentArray, $nc(a)->clone()), a, 0, $nc(a)->length, 0, c);
		$var($ListIterator, i, l->listIterator());
		{
			$var($ComponentArray, arr$, a);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($Component, e, arr$->get(i$));
				{
					$nc(i)->next();
					i->set(e);
				}
			}
		}
	}
}

void SortingFocusTraversalPolicy::enumerateCycle($Container* container, $List* cycle) {
	$useLocalObjectStack();
	bool var$0 = $nc(container)->isVisible();
	if (!(var$0 && container->isDisplayable())) {
		return;
	}
	$nc(cycle)->add(container);
	$var($ComponentArray, components, container->getComponents());
	{
		$var($ComponentArray, arr$, components);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, comp, arr$->get(i$));
			{
				if ($instanceOf($Container, comp)) {
					$var($Container, cont, $cast($Container, comp));
					bool var$2 = !cont->isFocusCycleRoot();
					bool var$1 = var$2 && !cont->isFocusTraversalPolicyProvider();
					if (var$1 && !(($instanceOf($JComponent, cont)) && $cast($JComponent, cont)->isManagingFocus())) {
						enumerateCycle(cont, cycle);
						continue;
					}
				}
				cycle->add(comp);
			}
		}
	}
}

$Container* SortingFocusTraversalPolicy::getTopmostProvider($Container* focusCycleRoot, $Component* aComponent) {
	$useLocalObjectStack();
	$var($Container, aCont, $nc(aComponent)->getParent());
	$var($Container, ftp, nullptr);
	while (aCont != focusCycleRoot && aCont != nullptr) {
		if (aCont->isFocusTraversalPolicyProvider()) {
			$assign(ftp, aCont);
		}
		$assign(aCont, aCont->getParent());
	}
	if (aCont == nullptr) {
		return nullptr;
	}
	return ftp;
}

$Component* SortingFocusTraversalPolicy::getComponentDownCycle($Component* comp, int32_t traversalDirection) {
	$useLocalObjectStack();
	$var($Component, retComp, nullptr);
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		if (cont->isFocusCycleRoot()) {
			if (getImplicitDownCycleTraversal()) {
				$assign(retComp, $$nc(cont->getFocusTraversalPolicy())->getDefaultComponent(cont));
				$init($PlatformLogger$Level);
				if (retComp != nullptr && $nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(this->log)->fine($$str({"### Transfered focus down-cycle to "_s, retComp, " in the focus cycle root "_s, cont}));
				}
			} else {
				return nullptr;
			}
		} else if (cont->isFocusTraversalPolicyProvider()) {
			$assign(retComp, traversalDirection == SortingFocusTraversalPolicy::FORWARD_TRAVERSAL ? $$nc(cont->getFocusTraversalPolicy())->getDefaultComponent(cont) : $$nc(cont->getFocusTraversalPolicy())->getLastComponent(cont));
			$init($PlatformLogger$Level);
			if (retComp != nullptr && $nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(this->log)->fine($$str({"### Transfered focus to "_s, retComp, " in the FTP provider "_s, cont}));
			}
		}
	}
	return retComp;
}

$Component* SortingFocusTraversalPolicy::getComponentAfter($Container* aContainer, $Component* aComponent$renamed) {
	$useLocalObjectStack();
	$var($Component, aComponent, aComponent$renamed);
	$init($PlatformLogger$Level);
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Searching in "_s, aContainer, " for component after "_s, aComponent}));
	}
	if (aContainer == nullptr || aComponent == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer and aComponent cannot be null"_s);
	}
	bool var$0 = !$nc(aContainer)->isFocusTraversalPolicyProvider();
	if (var$0 && !aContainer->isFocusCycleRoot()) {
		$throwNew($IllegalArgumentException, "aContainer should be focus cycle root or focus traversal policy provider"_s);
	} else {
		bool var$1 = aContainer->isFocusCycleRoot();
		if (var$1 && !$nc(aComponent)->isFocusCycleRoot(aContainer)) {
			$throwNew($IllegalArgumentException, "aContainer is not a focus cycle root of aComponent"_s);
		}
	}
	$var($Component, comp, getComponentDownCycle(aComponent, SortingFocusTraversalPolicy::FORWARD_TRAVERSAL));
	if (comp != nullptr) {
		return comp;
	}
	$var($Container, provider, getTopmostProvider(aContainer, aComponent));
	if (provider != nullptr) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Asking FTP "_s, provider, " for component after "_s, aComponent}));
		}
		$var($FocusTraversalPolicy, policy, provider->getFocusTraversalPolicy());
		$var($Component, afterComp, $nc(policy)->getComponentAfter(provider, aComponent));
		if (afterComp != nullptr) {
			if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(this->log)->fine($$str({"### FTP returned "_s, afterComp}));
			}
			return afterComp;
		}
		$assign(aComponent, provider);
	}
	$var($List, cycle, getFocusTraversalCycle(aContainer));
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle, ", component is "_s, aComponent}));
	}
	int32_t index = getComponentIndex(cycle, aComponent);
	if (index < 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Didn\'t find component "_s, aComponent, " in a cycle "_s, aContainer}));
		}
		return getFirstComponent(aContainer);
	}
	for (++index; index < $nc(cycle)->size(); ++index) {
		$assign(comp, $cast($Component, cycle->get(index)));
		if (accept(comp)) {
			return comp;
		} else if (($assign(comp, getComponentDownCycle(comp, SortingFocusTraversalPolicy::FORWARD_TRAVERSAL))) != nullptr) {
			return comp;
		}
	}
	if (aContainer->isFocusCycleRoot()) {
		$set(this, cachedRoot, aContainer);
		$set(this, cachedCycle, cycle);
		$assign(comp, getFirstComponent(aContainer));
		$set(this, cachedRoot, nullptr);
		$set(this, cachedCycle, nullptr);
		return comp;
	}
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getComponentBefore($Container* aContainer, $Component* aComponent$renamed) {
	$useLocalObjectStack();
	$var($Component, aComponent, aComponent$renamed);
	if (aContainer == nullptr || aComponent == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer and aComponent cannot be null"_s);
	}
	bool var$0 = !$nc(aContainer)->isFocusTraversalPolicyProvider();
	if (var$0 && !aContainer->isFocusCycleRoot()) {
		$throwNew($IllegalArgumentException, "aContainer should be focus cycle root or focus traversal policy provider"_s);
	} else {
		bool var$1 = aContainer->isFocusCycleRoot();
		if (var$1 && !$nc(aComponent)->isFocusCycleRoot(aContainer)) {
			$throwNew($IllegalArgumentException, "aContainer is not a focus cycle root of aComponent"_s);
		}
	}
	$var($Container, provider, getTopmostProvider(aContainer, aComponent));
	if (provider != nullptr) {
		$init($PlatformLogger$Level);
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Asking FTP "_s, provider, " for component after "_s, aComponent}));
		}
		$var($FocusTraversalPolicy, policy, provider->getFocusTraversalPolicy());
		$var($Component, beforeComp, $nc(policy)->getComponentBefore(provider, aComponent));
		if (beforeComp != nullptr) {
			if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(this->log)->fine($$str({"### FTP returned "_s, beforeComp}));
			}
			return beforeComp;
		}
		$assign(aComponent, provider);
		if (accept(aComponent)) {
			return aComponent;
		}
	}
	$var($List, cycle, getFocusTraversalCycle(aContainer));
	$init($PlatformLogger$Level);
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle, ", component is "_s, aComponent}));
	}
	int32_t index = getComponentIndex(cycle, aComponent);
	if (index < 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Didn\'t find component "_s, aComponent, " in a cycle "_s, aContainer}));
		}
		return getLastComponent(aContainer);
	}
	$var($Component, comp, nullptr);
	$var($Component, tryComp, nullptr);
	for (--index; index >= 0; --index) {
		$assign(comp, $cast($Component, $nc(cycle)->get(index)));
		if (!$equals(comp, aContainer) && ($assign(tryComp, getComponentDownCycle(comp, SortingFocusTraversalPolicy::BACKWARD_TRAVERSAL))) != nullptr) {
			return tryComp;
		} else if (accept(comp)) {
			return comp;
		}
	}
	if (aContainer->isFocusCycleRoot()) {
		$set(this, cachedRoot, aContainer);
		$set(this, cachedCycle, cycle);
		$assign(comp, getLastComponent(aContainer));
		$set(this, cachedRoot, nullptr);
		$set(this, cachedCycle, nullptr);
		return comp;
	}
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getFirstComponent($Container* aContainer) {
	$useLocalObjectStack();
	$var($List, cycle, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Getting first component in "_s, aContainer}));
	}
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	if (this->cachedRoot == aContainer) {
		$assign(cycle, this->cachedCycle);
	} else {
		$assign(cycle, getFocusTraversalCycle(aContainer));
	}
	if ($nc(cycle)->size() == 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine("### Cycle is empty"_s);
		}
		return nullptr;
	}
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle}));
	}
	{
		$var($Iterator, i$, cycle->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, comp, $cast($Component, i$->next()));
			if (accept(comp)) {
				return comp;
			} else if (!$equals(comp, aContainer) && ($assign(comp, getComponentDownCycle(comp, SortingFocusTraversalPolicy::FORWARD_TRAVERSAL))) != nullptr) {
				return comp;
			}
		}
	}
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getLastComponent($Container* aContainer) {
	$useLocalObjectStack();
	$var($List, cycle, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Getting last component in "_s, aContainer}));
	}
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	if (this->cachedRoot == aContainer) {
		$assign(cycle, this->cachedCycle);
	} else {
		$assign(cycle, getFocusTraversalCycle(aContainer));
	}
	if ($nc(cycle)->size() == 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine("### Cycle is empty"_s);
		}
		return nullptr;
	}
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle}));
	}
	for (int32_t i = cycle->size() - 1; i >= 0; --i) {
		$var($Component, comp, $cast($Component, cycle->get(i)));
		if (accept(comp)) {
			return comp;
		} else if ($instanceOf($Container, comp) && !$equals(comp, aContainer)) {
			$var($Container, cont, $cast($Container, comp));
			if (cont->isFocusTraversalPolicyProvider()) {
				$var($Component, retComp, $$nc(cont->getFocusTraversalPolicy())->getLastComponent(cont));
				if (retComp != nullptr) {
					return retComp;
				}
			}
		}
	}
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getDefaultComponent($Container* aContainer) {
	return getFirstComponent(aContainer);
}

void SortingFocusTraversalPolicy::setImplicitDownCycleTraversal(bool implicitDownCycleTraversal) {
	this->implicitDownCycleTraversal = implicitDownCycleTraversal;
}

bool SortingFocusTraversalPolicy::getImplicitDownCycleTraversal() {
	return this->implicitDownCycleTraversal;
}

void SortingFocusTraversalPolicy::setComparator($Comparator* comparator) {
	$set(this, comparator, comparator);
}

$Comparator* SortingFocusTraversalPolicy::getComparator() {
	return this->comparator;
}

bool SortingFocusTraversalPolicy::accept($Component* aComponent) {
	return SortingFocusTraversalPolicy::fitnessTestPolicy->accept(aComponent);
}

void SortingFocusTraversalPolicy::mergeSort($ObjectArray* src, $ObjectArray* dest, int32_t low, int32_t high, int32_t off, $Comparator* c) {
	$useLocalObjectStack();
	int32_t length = high - low;
	if (length < 7) {
		for (int32_t i = low; i < high; ++i) {
			for (int32_t j = i; j > low && $nc(c)->compare($nc(dest)->get(j - 1), $nc(dest)->get(j)) > 0; --j) {
				$var($Object0, t, dest->get(j));
				dest->set(j, dest->get(j - 1));
				dest->set(j - 1, t);
			}
		}
		return;
	}
	int32_t destLow = low;
	int32_t destHigh = high;
	low += off;
	high += off;
	int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
	mergeSort(dest, src, low, mid, -off, c);
	mergeSort(dest, src, mid, high, -off, c);
	if ($nc(c)->compare($nc(src)->get(mid - 1), $nc(src)->get(mid)) <= 0) {
		$System::arraycopy(src, low, dest, destLow, length);
		return;
	}
	for (int32_t i = destLow, p = low, q = mid; i < destHigh; ++i) {
		if (q >= high || p < mid && c->compare(src->get(p), src->get(q)) <= 0) {
			$nc(dest)->set(i, src->get(p++));
		} else {
			$nc(dest)->set(i, src->get(q++));
		}
	}
}

void SortingFocusTraversalPolicy::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(SortingFocusTraversalPolicy::fitnessTestPolicy, $new($SwingContainerOrderFocusTraversalPolicy));
	{
		SortingFocusTraversalPolicy::legacySortingFTPEnabled = "true"_s->equals($($AccessController::doPrivileged($$new($GetPropertyAction, "swing.legacySortingFTPEnabled"_s, "true"_s))));
	}
}

SortingFocusTraversalPolicy::SortingFocusTraversalPolicy() {
}

$Class* SortingFocusTraversalPolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-Ljava/awt/Component;>;", $PRIVATE, $field(SortingFocusTraversalPolicy, comparator)},
		{"implicitDownCycleTraversal", "Z", nullptr, $PRIVATE, $field(SortingFocusTraversalPolicy, implicitDownCycleTraversal)},
		{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE, $field(SortingFocusTraversalPolicy, log)},
		{"cachedRoot", "Ljava/awt/Container;", nullptr, $PRIVATE | $TRANSIENT, $field(SortingFocusTraversalPolicy, cachedRoot)},
		{"cachedCycle", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE | $TRANSIENT, $field(SortingFocusTraversalPolicy, cachedCycle)},
		{"fitnessTestPolicy", "Ljavax/swing/SwingContainerOrderFocusTraversalPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SortingFocusTraversalPolicy, fitnessTestPolicy)},
		{"FORWARD_TRAVERSAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortingFocusTraversalPolicy, FORWARD_TRAVERSAL)},
		{"BACKWARD_TRAVERSAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortingFocusTraversalPolicy, BACKWARD_TRAVERSAL)},
		{"legacySortingFTPEnabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SortingFocusTraversalPolicy, legacySortingFTPEnabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SortingFocusTraversalPolicy, init$, void)},
		{"<init>", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-Ljava/awt/Component;>;)V", $PUBLIC, $method(SortingFocusTraversalPolicy, init$, void, $Comparator*)},
		{"accept", "(Ljava/awt/Component;)Z", nullptr, $PROTECTED, $virtualMethod(SortingFocusTraversalPolicy, accept, bool, $Component*)},
		{"enumerateAndSortCycle", "(Ljava/awt/Container;Ljava/util/List;)V", "(Ljava/awt/Container;Ljava/util/List<Ljava/awt/Component;>;)V", $PRIVATE, $method(SortingFocusTraversalPolicy, enumerateAndSortCycle, void, $Container*, $List*)},
		{"enumerateCycle", "(Ljava/awt/Container;Ljava/util/List;)V", "(Ljava/awt/Container;Ljava/util/List<Ljava/awt/Component;>;)V", $PRIVATE, $method(SortingFocusTraversalPolicy, enumerateCycle, void, $Container*, $List*)},
		{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/awt/Component;>;", $PROTECTED, $virtualMethod(SortingFocusTraversalPolicy, getComparator, $Comparator*)},
		{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(SortingFocusTraversalPolicy, getComponentAfter, $Component*, $Container*, $Component*)},
		{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(SortingFocusTraversalPolicy, getComponentBefore, $Component*, $Container*, $Component*)},
		{"getComponentDownCycle", "(Ljava/awt/Component;I)Ljava/awt/Component;", nullptr, $PRIVATE, $method(SortingFocusTraversalPolicy, getComponentDownCycle, $Component*, $Component*, int32_t)},
		{"getComponentIndex", "(Ljava/util/List;Ljava/awt/Component;)I", "(Ljava/util/List<Ljava/awt/Component;>;Ljava/awt/Component;)I", $PRIVATE, $method(SortingFocusTraversalPolicy, getComponentIndex, int32_t, $List*, $Component*)},
		{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(SortingFocusTraversalPolicy, getDefaultComponent, $Component*, $Container*)},
		{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(SortingFocusTraversalPolicy, getFirstComponent, $Component*, $Container*)},
		{"getFocusTraversalCycle", "(Ljava/awt/Container;)Ljava/util/List;", "(Ljava/awt/Container;)Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE, $method(SortingFocusTraversalPolicy, getFocusTraversalCycle, $List*, $Container*)},
		{"getImplicitDownCycleTraversal", "()Z", nullptr, $PUBLIC, $virtualMethod(SortingFocusTraversalPolicy, getImplicitDownCycleTraversal, bool)},
		{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(SortingFocusTraversalPolicy, getLastComponent, $Component*, $Container*)},
		{"getTopmostProvider", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Container;", nullptr, 0, $virtualMethod(SortingFocusTraversalPolicy, getTopmostProvider, $Container*, $Container*, $Component*)},
		{"legacySort", "(Ljava/util/List;Ljava/util/Comparator;)V", "(Ljava/util/List<Ljava/awt/Component;>;Ljava/util/Comparator<-Ljava/awt/Component;>;)V", $PRIVATE, $method(SortingFocusTraversalPolicy, legacySort, void, $List*, $Comparator*)},
		{"mergeSort", "([Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;[TT;IIILjava/util/Comparator<-TT;>;)V", $PRIVATE, $method(SortingFocusTraversalPolicy, mergeSort, void, $ObjectArray*, $ObjectArray*, int32_t, int32_t, int32_t, $Comparator*)},
		{"setComparator", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-Ljava/awt/Component;>;)V", $PROTECTED, $virtualMethod(SortingFocusTraversalPolicy, setComparator, void, $Comparator*)},
		{"setImplicitDownCycleTraversal", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SortingFocusTraversalPolicy, setImplicitDownCycleTraversal, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.SortingFocusTraversalPolicy",
		"javax.swing.InternalFrameFocusTraversalPolicy",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SortingFocusTraversalPolicy, name, initialize, &classInfo$$, SortingFocusTraversalPolicy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SortingFocusTraversalPolicy);
	});
	return class$;
}

$Class* SortingFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax