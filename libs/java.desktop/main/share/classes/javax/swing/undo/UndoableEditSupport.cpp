#include <javax/swing/undo/UndoableEditSupport.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $UndoableEditListenerArray = $Array<::javax::swing::event::UndoableEditListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoableEdit = ::javax::swing::undo::UndoableEdit;

namespace javax {
	namespace swing {
		namespace undo {

void UndoableEditSupport::init$() {
	UndoableEditSupport::init$(nullptr);
}

void UndoableEditSupport::init$(Object$* r) {
	$set(this, realSource, r == nullptr ? $of(this) : $of(r));
	this->updateLevel = 0;
	$set(this, compoundEdit, nullptr);
	$set(this, listeners, $new($Vector));
}

void UndoableEditSupport::addUndoableEditListener($UndoableEditListener* l) {
	$synchronized(this) {
		$nc(this->listeners)->addElement(l);
	}
}

void UndoableEditSupport::removeUndoableEditListener($UndoableEditListener* l) {
	$synchronized(this) {
		$nc(this->listeners)->removeElement(l);
	}
}

$UndoableEditListenerArray* UndoableEditSupport::getUndoableEditListeners() {
	$synchronized(this) {
		return $cast($UndoableEditListenerArray, $nc(this->listeners)->toArray($$new($UndoableEditListenerArray, 0)));
	}
}

void UndoableEditSupport::_postEdit($UndoableEdit* e) {
	$useLocalObjectStack();
	$var($UndoableEditEvent, ev, $new($UndoableEditEvent, this->realSource, e));
	$var($Enumeration, cursor, $$sure($Vector, $nc(this->listeners)->clone())->elements());
	while ($nc(cursor)->hasMoreElements()) {
		$$sure($UndoableEditListener, cursor->nextElement())->undoableEditHappened(ev);
	}
}

void UndoableEditSupport::postEdit($UndoableEdit* e) {
	$synchronized(this) {
		if (this->updateLevel == 0) {
			_postEdit(e);
		} else {
			$nc(this->compoundEdit)->addEdit(e);
		}
	}
}

int32_t UndoableEditSupport::getUpdateLevel() {
	return this->updateLevel;
}

void UndoableEditSupport::beginUpdate() {
	$synchronized(this) {
		if (this->updateLevel == 0) {
			$set(this, compoundEdit, createCompoundEdit());
		}
		++this->updateLevel;
	}
}

$CompoundEdit* UndoableEditSupport::createCompoundEdit() {
	return $new($CompoundEdit);
}

void UndoableEditSupport::endUpdate() {
	$synchronized(this) {
		--this->updateLevel;
		if (this->updateLevel == 0) {
			$nc(this->compoundEdit)->end();
			_postEdit(this->compoundEdit);
			$set(this, compoundEdit, nullptr);
		}
	}
}

$String* UndoableEditSupport::toString() {
	$useLocalObjectStack();
	return $str({$($Object::toString()), " updateLevel: "_s, $$str(this->updateLevel), " listeners: "_s, this->listeners, " compoundEdit: "_s, this->compoundEdit});
}

UndoableEditSupport::UndoableEditSupport() {
}

$Class* UndoableEditSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"updateLevel", "I", nullptr, $PROTECTED, $field(UndoableEditSupport, updateLevel)},
		{"compoundEdit", "Ljavax/swing/undo/CompoundEdit;", nullptr, $PROTECTED, $field(UndoableEditSupport, compoundEdit)},
		{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/event/UndoableEditListener;>;", $PROTECTED, $field(UndoableEditSupport, listeners)},
		{"realSource", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(UndoableEditSupport, realSource)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UndoableEditSupport, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(UndoableEditSupport, init$, void, Object$*)},
		{"_postEdit", "(Ljavax/swing/undo/UndoableEdit;)V", nullptr, $PROTECTED, $virtualMethod(UndoableEditSupport, _postEdit, void, $UndoableEdit*)},
		{"addUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UndoableEditSupport, addUndoableEditListener, void, $UndoableEditListener*)},
		{"beginUpdate", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UndoableEditSupport, beginUpdate, void)},
		{"createCompoundEdit", "()Ljavax/swing/undo/CompoundEdit;", nullptr, $PROTECTED, $virtualMethod(UndoableEditSupport, createCompoundEdit, $CompoundEdit*)},
		{"endUpdate", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UndoableEditSupport, endUpdate, void)},
		{"getUndoableEditListeners", "()[Ljavax/swing/event/UndoableEditListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UndoableEditSupport, getUndoableEditListeners, $UndoableEditListenerArray*)},
		{"getUpdateLevel", "()I", nullptr, $PUBLIC, $virtualMethod(UndoableEditSupport, getUpdateLevel, int32_t)},
		{"postEdit", "(Ljavax/swing/undo/UndoableEdit;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UndoableEditSupport, postEdit, void, $UndoableEdit*)},
		{"removeUndoableEditListener", "(Ljavax/swing/event/UndoableEditListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(UndoableEditSupport, removeUndoableEditListener, void, $UndoableEditListener*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UndoableEditSupport, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.undo.UndoableEditSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UndoableEditSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UndoableEditSupport);
	});
	return class$;
}

$Class* UndoableEditSupport::class$ = nullptr;

		} // undo
	} // swing
} // javax