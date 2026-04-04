#include <bug6823603.h>
#include <bug6823603$1.h>
#include <bug6823603$2.h>
#include <bug6823603$3.h>
#include <java/awt/Component.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

#undef MULTIPLE_INTERVAL_SELECTION
#undef TEST_ELEMENT

using $bug6823603$1 = ::bug6823603$1;
using $bug6823603$2 = ::bug6823603$2;
using $bug6823603$3 = ::bug6823603$3;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

$String* bug6823603::TEST_ELEMENT = nullptr;

void bug6823603::init$() {
}

void bug6823603::main($StringArray* args) {
	$init(bug6823603);
	testRawSignatures();
	testGenericSignatures();
	testGetSelectedValuesList();
}

void bug6823603::testRawSignatures() {
	$init(bug6823603);
	$useLocalObjectStack();
	$var($ListModel, rawTestModel, $new($DefaultListModel));
	$new($JList);
	$new($JList, rawTestModel);
	$new($JList, $$new($ObjectArray, {bug6823603::TEST_ELEMENT}));
	$var($JList, rawTestList, $new($JList, $$new($Vector)));
	rawTestList->getPrototypeCellValue();
	rawTestList->setPrototypeCellValue(bug6823603::TEST_ELEMENT);
	rawTestList->getCellRenderer();
	rawTestList->setCellRenderer($$new($DefaultListCellRenderer));
	rawTestList->getModel();
	rawTestList->setModel(rawTestModel);
	rawTestList->setListData($$new($ObjectArray, {bug6823603::TEST_ELEMENT}));
	rawTestList->setListData($$new($Vector));
	$var($ObjectArray, selectedValues, rawTestList->getSelectedValues());
	rawTestList->getSelectedValue();
	$var($ListCellRenderer, rawTestCellRenderer, $new($DefaultListCellRenderer));
	$var($String, testEntry, "Test"_s);
	$var($JList, rawJList, $new($JList, $$new($ObjectArray, {testEntry})));
	rawTestCellRenderer->getListCellRendererComponent(rawJList, testEntry, 0, true, true);
	$var($DefaultListModel, testModel, $new($DefaultListModel));
	testModel->addElement(bug6823603::TEST_ELEMENT);
	$assign(rawTestModel, testModel);
	rawTestModel->getElementAt(0);
	$var($DefaultListModel, defaultListModel, $new($DefaultListModel));
	defaultListModel->addElement(bug6823603::TEST_ELEMENT);
	defaultListModel->getElementAt(0);
	defaultListModel->elements();
	defaultListModel->elementAt(0);
	defaultListModel->firstElement();
	defaultListModel->lastElement();
	$var($String, testElement2, "Test2"_s);
	defaultListModel->setElementAt(testElement2, 0);
	defaultListModel->insertElementAt(bug6823603::TEST_ELEMENT, 0);
	defaultListModel->get(0);
	defaultListModel->set(0, testElement2);
	defaultListModel->add(0, bug6823603::TEST_ELEMENT);
	defaultListModel->remove(0);
	$var($ListModel, abstractListModel, $new($bug6823603$1));
	$var($DefaultListCellRenderer, cellRenderer, $new($DefaultListCellRenderer));
	$var($JList, list, $new($JList, $$new($ObjectArray, {testEntry})));
	cellRenderer->getListCellRendererComponent(rawJList, testEntry, 0, true, true);
}

void bug6823603::testGenericSignatures() {
	$init(bug6823603);
	$useLocalObjectStack();
	$var($ListModel, stringListModel, $new($DefaultListModel));
	$new($JList);
	$new($JList, stringListModel);
	$new($JList, $$new($StringArray, {bug6823603::TEST_ELEMENT}));
	$var($JList, stringTestList, $new($JList, $$new($Vector)));
	stringTestList->getPrototypeCellValue();
	stringTestList->setPrototypeCellValue(bug6823603::TEST_ELEMENT);
	$var($ListCellRenderer, cellRenderer, stringTestList->getCellRenderer());
	stringTestList->setCellRenderer($$new($DefaultListCellRenderer));
	$var($ListModel, model, stringTestList->getModel());
	stringTestList->setModel(stringListModel);
	stringTestList->setListData($$new($StringArray, {bug6823603::TEST_ELEMENT}));
	stringTestList->setListData($$new($Vector));
	$var($ObjectArray, selectedValues, stringTestList->getSelectedValues());
	stringTestList->getSelectedValue();
	$var($ListCellRenderer, stringTestCellRenderer, $new($DefaultListCellRenderer));
	$var($String, testEntry, "Test"_s);
	$var($JList, stringJList, $new($JList, $$new($StringArray, {testEntry})));
	$var($Component, listCellRendererComponent2, stringTestCellRenderer->getListCellRendererComponent(stringJList, testEntry, 0, true, true));
	$var($DefaultListModel, testModel, $new($DefaultListModel));
	testModel->addElement(bug6823603::TEST_ELEMENT);
	$assign(stringListModel, testModel);
	$var($String, element1, $cast($String, stringListModel->getElementAt(0)));
	$var($DefaultListModel, stringTestModel, $new($DefaultListModel));
	stringTestModel->addElement(bug6823603::TEST_ELEMENT);
	$assign(element1, $cast($String, stringTestModel->getElementAt(0)));
	$var($Enumeration, elements, stringTestModel->elements());
	$var($String, element2, $cast($String, stringTestModel->elementAt(0)));
	$var($String, firstElement, $cast($String, stringTestModel->firstElement()));
	$var($String, lastElement, $cast($String, stringTestModel->lastElement()));
	$var($String, testElement2, "Test2"_s);
	stringTestModel->setElementAt(testElement2, 0);
	stringTestModel->insertElementAt(bug6823603::TEST_ELEMENT, 0);
	$var($String, element3, $cast($String, stringTestModel->get(0)));
	$var($String, element4, $cast($String, stringTestModel->set(0, testElement2)));
	stringTestModel->add(0, bug6823603::TEST_ELEMENT);
	$var($String, removedElement, $cast($String, stringTestModel->remove(0)));
	$assign(stringListModel, $new($bug6823603$2));
	$var($ListModel, genericTestModel, $new($bug6823603$3));
	$assign(cellRenderer, $new($DefaultListCellRenderer));
	$assign(stringJList, $new($JList, $$new($StringArray, {testEntry})));
	$assign(listCellRendererComponent2, cellRenderer->getListCellRendererComponent(stringJList, testEntry, 0, true, true));
}

void bug6823603::testGetSelectedValuesList() {
	$init(bug6823603);
	$useLocalObjectStack();
	$var($Vector, data, $new($Vector));
	for (int32_t i = 0; i < 10; ++i) {
		data->add($($Integer::valueOf(i)));
	}
	$var($JList, list, $new($JList, data));
	list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	list->setSelectedIndices($$new($ints, {
		1,
		2,
		3,
		5,
		6,
		8
	}));
	$var($ObjectArray, expectedSelectedValues, list->getSelectedValues());
	$var($List, selectedValuesList, list->getSelectedValuesList());
	assertEquals(expectedSelectedValues, $($nc(selectedValuesList)->toArray()));
}

void bug6823603::assertEquals($ObjectArray* expectedArray, $ObjectArray* actualArray) {
	$init(bug6823603);
	$useLocalObjectStack();
	if (!$Arrays::equals(expectedArray, actualArray)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Expected: "_s);
		var$0->append($($Arrays::toString(expectedArray)));
		var$0->append(" but was: "_s);
		var$0->append($($Arrays::toString(actualArray)));
		$throwNew($RuntimeException, $$str(var$0));
	}
}

bug6823603::bug6823603() {
}

void bug6823603::clinit$($Class* clazz) {
	$assignStatic(bug6823603::TEST_ELEMENT, "Test1"_s);
}

$Class* bug6823603::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_ELEMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6823603, TEST_ELEMENT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6823603, init$, void)},
		{"assertEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6823603, assertEquals, void, $ObjectArray*, $ObjectArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6823603, main, void, $StringArray*)},
		{"testGenericSignatures", "()V", "<E:Ljava/lang/Object;>()V", $PRIVATE | $STATIC, $staticMethod(bug6823603, testGenericSignatures, void)},
		{"testGetSelectedValuesList", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6823603, testGetSelectedValuesList, void)},
		{"testRawSignatures", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6823603, testRawSignatures, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6823603$3", nullptr, nullptr, 0},
		{"bug6823603$2", nullptr, nullptr, 0},
		{"bug6823603$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6823603",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6823603$3,bug6823603$2,bug6823603$1"
	};
	$loadClass(bug6823603, name, initialize, &classInfo$$, bug6823603::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6823603);
	});
	return class$;
}

$Class* bug6823603::class$ = nullptr;