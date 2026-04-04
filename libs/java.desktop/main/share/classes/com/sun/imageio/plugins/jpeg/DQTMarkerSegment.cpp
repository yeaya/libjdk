#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef DQT
#undef QTABLE_SIZE

using $JPEGQTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGQTable>;
using $DQTMarkerSegment$Qtable = ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment$Qtable;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void DQTMarkerSegment::init$(float quality, bool needTwo) {
	$useLocalObjectStack();
	$MarkerSegment::init$($JPEG::DQT);
	$set(this, tables, $new($ArrayList));
	this->tables->add($$new($DQTMarkerSegment$Qtable, this, true, quality));
	if (needTwo) {
		this->tables->add($$new($DQTMarkerSegment$Qtable, this, false, quality));
	}
}

void DQTMarkerSegment::init$($JPEGBuffer* buffer) {
	$useLocalObjectStack();
	$MarkerSegment::init$(buffer);
	$set(this, tables, $new($ArrayList));
	int32_t count = this->length;
	while (count > 0) {
		$var($DQTMarkerSegment$Qtable, newGuy, $new($DQTMarkerSegment$Qtable, this, buffer));
		this->tables->add(newGuy);
		count -= $nc(newGuy->data)->length + 1;
	}
	$nc(buffer)->bufAvail -= this->length;
}

void DQTMarkerSegment::init$($JPEGQTableArray* qtables) {
	$useLocalObjectStack();
	$MarkerSegment::init$($JPEG::DQT);
	$set(this, tables, $new($ArrayList));
	for (int32_t i = 0; i < $nc(qtables)->length; ++i) {
		this->tables->add($$new($DQTMarkerSegment$Qtable, this, qtables->get(i), i));
	}
}

void DQTMarkerSegment::init$($Node* node) {
	$useLocalObjectStack();
	$MarkerSegment::init$($JPEG::DQT);
	$set(this, tables, $new($ArrayList));
	$var($NodeList, children, $nc(node)->getChildNodes());
	int32_t size = $nc(children)->getLength();
	if ((size < 1) || (size > 4)) {
		$throwNew($IIOInvalidTreeException, "Invalid DQT node"_s, node);
	}
	for (int32_t i = 0; i < size; ++i) {
		$nc(this->tables)->add($$new($DQTMarkerSegment$Qtable, this, $(children->item(i))));
	}
}

$Object* DQTMarkerSegment::clone() {
	$useLocalObjectStack();
	$var(DQTMarkerSegment, newGuy, $cast(DQTMarkerSegment, $MarkerSegment::clone()));
	$set($nc(newGuy), tables, $new($ArrayList, $nc(this->tables)->size()));
	{
		$var($Iterator, i$, this->tables->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DQTMarkerSegment$Qtable, table, $cast($DQTMarkerSegment$Qtable, i$->next()));
			{
				$nc(newGuy->tables)->add($$cast($DQTMarkerSegment$Qtable, $nc(table)->clone()));
			}
		}
	}
	return newGuy;
}

$IIOMetadataNode* DQTMarkerSegment::getNativeNode() {
	$useLocalObjectStack();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "dqt"_s));
	for (int32_t i = 0; i < $nc(this->tables)->size(); ++i) {
		$var($DQTMarkerSegment$Qtable, table, $cast($DQTMarkerSegment$Qtable, this->tables->get(i)));
		node->appendChild($($nc(table)->getNativeNode()));
	}
	return node;
}

void DQTMarkerSegment::write($ImageOutputStream* ios) {
}

void DQTMarkerSegment::print() {
	$useLocalObjectStack();
	printTag("DQT"_s);
	$nc($System::out)->println($$str({"Num tables: "_s, $($Integer::toString($nc(this->tables)->size()))}));
	for (int32_t i = 0; i < $nc(this->tables)->size(); ++i) {
		$var($DQTMarkerSegment$Qtable, table, $cast($DQTMarkerSegment$Qtable, this->tables->get(i)));
		$nc(table)->print();
	}
	$System::out->println();
}

$DQTMarkerSegment$Qtable* DQTMarkerSegment::getChromaForLuma($DQTMarkerSegment$Qtable* luma) {
	$useLocalObjectStack();
	$var($DQTMarkerSegment$Qtable, newGuy, nullptr);
	bool allSame = true;
	for (int32_t i = 1; i < $nc(luma)->QTABLE_SIZE; ++i) {
		if ($nc(luma->data)->get(i) != $nc(luma->data)->get(i - 1)) {
			allSame = false;
			break;
		}
	}
	if (allSame) {
		$assign(newGuy, $cast($DQTMarkerSegment$Qtable, luma->clone()));
		$nc(newGuy)->tableID = 1;
	} else {
		int32_t largestPos = 0;
		for (int32_t i = 1; i < luma->QTABLE_SIZE; ++i) {
			if ($nc(luma->data)->get(i) > $nc(luma->data)->get(largestPos)) {
				largestPos = i;
			}
		}
		$init($JPEGQTable);
		float scaleFactor = ((float)($nc(luma->data)->get(largestPos))) / ((float)($nc($($nc($JPEGQTable::K1Div2Luminance)->getTable()))->get(largestPos)));
		$var($JPEGQTable, jpegTable, $nc($JPEGQTable::K2Div2Chrominance)->getScaledInstance(scaleFactor, true));
		$assign(newGuy, $new($DQTMarkerSegment$Qtable, this, jpegTable, 1));
	}
	return newGuy;
}

$DQTMarkerSegment$Qtable* DQTMarkerSegment::getQtableFromNode($Node* node) {
	return $new($DQTMarkerSegment$Qtable, this, node);
}

DQTMarkerSegment::DQTMarkerSegment() {
}

$Class* DQTMarkerSegment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tables", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable;>;", 0, $field(DQTMarkerSegment, tables)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(FZ)V", nullptr, 0, $method(DQTMarkerSegment, init$, void, float, bool)},
		{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(DQTMarkerSegment, init$, void, $JPEGBuffer*), "java.io.IOException"},
		{"<init>", "([Ljavax/imageio/plugins/jpeg/JPEGQTable;)V", nullptr, 0, $method(DQTMarkerSegment, init$, void, $JPEGQTableArray*)},
		{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(DQTMarkerSegment, init$, void, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(DQTMarkerSegment, clone, $Object*)},
		{"getChromaForLuma", "(Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable;)Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable;", nullptr, 0, $virtualMethod(DQTMarkerSegment, getChromaForLuma, $DQTMarkerSegment$Qtable*, $DQTMarkerSegment$Qtable*)},
		{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0, $virtualMethod(DQTMarkerSegment, getNativeNode, $IIOMetadataNode*)},
		{"getQtableFromNode", "(Lorg/w3c/dom/Node;)Lcom/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable;", nullptr, 0, $virtualMethod(DQTMarkerSegment, getQtableFromNode, $DQTMarkerSegment$Qtable*, $Node*), "javax.imageio.metadata.IIOInvalidTreeException"},
		{"print", "()V", nullptr, 0, $virtualMethod(DQTMarkerSegment, print, void)},
		{"write", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, 0, $virtualMethod(DQTMarkerSegment, write, void, $ImageOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.jpeg.DQTMarkerSegment$Qtable", "com.sun.imageio.plugins.jpeg.DQTMarkerSegment", "Qtable", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.DQTMarkerSegment",
		"com.sun.imageio.plugins.jpeg.MarkerSegment",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.imageio.plugins.jpeg.DQTMarkerSegment$Qtable"
	};
	$loadClass(DQTMarkerSegment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DQTMarkerSegment);
	});
	return class$;
}

$Class* DQTMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com