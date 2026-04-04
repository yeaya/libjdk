#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$MotifFileListModel.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

int32_t MotifFileChooserUI$MotifFileListModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool MotifFileChooserUI$MotifFileListModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* MotifFileChooserUI$MotifFileListModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* MotifFileChooserUI$MotifFileListModel::toString() {
	 return this->$AbstractListModel::toString();
}

void MotifFileChooserUI$MotifFileListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void MotifFileChooserUI$MotifFileListModel::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$$nc(this$0->getModel())->addListDataListener(this);
}

int32_t MotifFileChooserUI$MotifFileListModel::getSize() {
	$useLocalObjectStack();
	return $$nc($$nc(this->this$0->getModel())->getFiles())->size();
}

bool MotifFileChooserUI$MotifFileListModel::contains(Object$* o) {
	$useLocalObjectStack();
	return $$nc($$nc(this->this$0->getModel())->getFiles())->contains(o);
}

int32_t MotifFileChooserUI$MotifFileListModel::indexOf(Object$* o) {
	$useLocalObjectStack();
	return $$nc($$nc(this->this$0->getModel())->getFiles())->indexOf(o);
}

$Object* MotifFileChooserUI$MotifFileListModel::getElementAt(int32_t index) {
	$useLocalObjectStack();
	return $of($cast($File, $$nc($$nc(this->this$0->getModel())->getFiles())->elementAt(index)));
}

void MotifFileChooserUI$MotifFileListModel::intervalAdded($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalAdded(this, var$0, e->getIndex1());
}

void MotifFileChooserUI$MotifFileListModel::intervalRemoved($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalRemoved(this, var$0, e->getIndex1());
}

void MotifFileChooserUI$MotifFileListModel::fireContentsChanged() {
	$useLocalObjectStack();
	fireContentsChanged(this, 0, $$nc($$nc(this->this$0->getModel())->getFiles())->size() - 1);
}

void MotifFileChooserUI$MotifFileListModel::contentsChanged($ListDataEvent* e) {
	fireContentsChanged();
}

MotifFileChooserUI$MotifFileListModel::MotifFileChooserUI$MotifFileListModel() {
}

$Class* MotifFileChooserUI$MotifFileListModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$MotifFileListModel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PUBLIC, $method(MotifFileChooserUI$MotifFileListModel, init$, void, $MotifFileChooserUI*)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, contains, bool, Object$*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, contentsChanged, void, $ListDataEvent*)},
		{"fireContentsChanged", "()V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, fireContentsChanged, void)},
		{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, getSize, int32_t)},
		{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, indexOf, int32_t, Object$*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$MotifFileListModel, intervalRemoved, void, $ListDataEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifFileListModel", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "MotifFileListModel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifFileListModel",
		"javax.swing.AbstractListModel",
		"javax.swing.event.ListDataListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/event/ListDataListener;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
	};
	$loadClass(MotifFileChooserUI$MotifFileListModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifFileChooserUI$MotifFileListModel));
	});
	return class$;
}

$Class* MotifFileChooserUI$MotifFileListModel::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com