#include <com/sun/source/util/DocTreeFactory.h>

#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocRootTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTypeTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/ErroneousTree.h>
#include <com/sun/source/doctree/HiddenTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/doctree/ProvidesTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/source/doctree/SeeTree.h>
#include <com/sun/source/doctree/SerialDataTree.h>
#include <com/sun/source/doctree/SerialFieldTree.h>
#include <com/sun/source/doctree/SerialTree.h>
#include <com/sun/source/doctree/SinceTree.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/source/doctree/SummaryTree.h>
#include <com/sun/source/doctree/SystemPropertyTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/source/doctree/VersionTree.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
using $CommentTree = ::com::sun::source::doctree::CommentTree;
using $DeprecatedTree = ::com::sun::source::doctree::DeprecatedTree;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocRootTree = ::com::sun::source::doctree::DocRootTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTypeTree = ::com::sun::source::doctree::DocTypeTree;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $ErroneousTree = ::com::sun::source::doctree::ErroneousTree;
using $HiddenTree = ::com::sun::source::doctree::HiddenTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $IndexTree = ::com::sun::source::doctree::IndexTree;
using $InheritDocTree = ::com::sun::source::doctree::InheritDocTree;
using $LinkTree = ::com::sun::source::doctree::LinkTree;
using $LiteralTree = ::com::sun::source::doctree::LiteralTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $ProvidesTree = ::com::sun::source::doctree::ProvidesTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $SeeTree = ::com::sun::source::doctree::SeeTree;
using $SerialDataTree = ::com::sun::source::doctree::SerialDataTree;
using $SerialFieldTree = ::com::sun::source::doctree::SerialFieldTree;
using $SerialTree = ::com::sun::source::doctree::SerialTree;
using $SinceTree = ::com::sun::source::doctree::SinceTree;
using $StartElementTree = ::com::sun::source::doctree::StartElementTree;
using $SummaryTree = ::com::sun::source::doctree::SummaryTree;
using $SystemPropertyTree = ::com::sun::source::doctree::SystemPropertyTree;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $UnknownBlockTagTree = ::com::sun::source::doctree::UnknownBlockTagTree;
using $UnknownInlineTagTree = ::com::sun::source::doctree::UnknownInlineTagTree;
using $UsesTree = ::com::sun::source::doctree::UsesTree;
using $ValueTree = ::com::sun::source::doctree::ValueTree;
using $VersionTree = ::com::sun::source::doctree::VersionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _DocTreeFactory_MethodInfo_[] = {
	{"at", "(I)Lcom/sun/source/util/DocTreeFactory;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, at, DocTreeFactory*, int32_t)},
	{"getFirstSentence", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Ljava/util/List<Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, getFirstSentence, $List*, $List*)},
	{"newAttributeTree", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List;)Lcom/sun/source/doctree/AttributeTree;", "(Ljavax/lang/model/element/Name;Lcom/sun/source/doctree/AttributeTree$ValueKind;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/AttributeTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newAttributeTree, $AttributeTree*, $Name*, $AttributeTree$ValueKind*, $List*)},
	{"newAuthorTree", "(Ljava/util/List;)Lcom/sun/source/doctree/AuthorTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/AuthorTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newAuthorTree, $AuthorTree*, $List*)},
	{"newCodeTree", "(Lcom/sun/source/doctree/TextTree;)Lcom/sun/source/doctree/LiteralTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newCodeTree, $LiteralTree*, $TextTree*)},
	{"newCommentTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/CommentTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newCommentTree, $CommentTree*, $String*)},
	{"newDeprecatedTree", "(Ljava/util/List;)Lcom/sun/source/doctree/DeprecatedTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/DeprecatedTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newDeprecatedTree, $DeprecatedTree*, $List*)},
	{"newDocCommentTree", "(Ljava/util/List;Ljava/util/List;)Lcom/sun/source/doctree/DocCommentTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/DocCommentTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newDocCommentTree, $DocCommentTree*, $List*, $List*)},
	{"newDocCommentTree", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Lcom/sun/source/doctree/DocCommentTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/DocCommentTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newDocCommentTree, $DocCommentTree*, $List*, $List*, $List*, $List*)},
	{"newDocRootTree", "()Lcom/sun/source/doctree/DocRootTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newDocRootTree, $DocRootTree*)},
	{"newDocTypeTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/DocTypeTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newDocTypeTree, $DocTypeTree*, $String*)},
	{"newEndElementTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/EndElementTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newEndElementTree, $EndElementTree*, $Name*)},
	{"newEntityTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/EntityTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newEntityTree, $EntityTree*, $Name*)},
	{"newErroneousTree", "(Ljava/lang/String;Ljavax/tools/Diagnostic;)Lcom/sun/source/doctree/ErroneousTree;", "(Ljava/lang/String;Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;)Lcom/sun/source/doctree/ErroneousTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newErroneousTree, $ErroneousTree*, $String*, $Diagnostic*)},
	{"newExceptionTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/ThrowsTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ThrowsTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newExceptionTree, $ThrowsTree*, $ReferenceTree*, $List*)},
	{"newHiddenTree", "(Ljava/util/List;)Lcom/sun/source/doctree/HiddenTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/HiddenTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newHiddenTree, $HiddenTree*, $List*)},
	{"newIdentifierTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/IdentifierTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newIdentifierTree, $IdentifierTree*, $Name*)},
	{"newIndexTree", "(Lcom/sun/source/doctree/DocTree;Ljava/util/List;)Lcom/sun/source/doctree/IndexTree;", "(Lcom/sun/source/doctree/DocTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/IndexTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newIndexTree, $IndexTree*, $DocTree*, $List*)},
	{"newInheritDocTree", "()Lcom/sun/source/doctree/InheritDocTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newInheritDocTree, $InheritDocTree*)},
	{"newLinkPlainTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/LinkTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/LinkTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newLinkPlainTree, $LinkTree*, $ReferenceTree*, $List*)},
	{"newLinkTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/LinkTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/LinkTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newLinkTree, $LinkTree*, $ReferenceTree*, $List*)},
	{"newLiteralTree", "(Lcom/sun/source/doctree/TextTree;)Lcom/sun/source/doctree/LiteralTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newLiteralTree, $LiteralTree*, $TextTree*)},
	{"newParamTree", "(ZLcom/sun/source/doctree/IdentifierTree;Ljava/util/List;)Lcom/sun/source/doctree/ParamTree;", "(ZLcom/sun/source/doctree/IdentifierTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ParamTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newParamTree, $ParamTree*, bool, $IdentifierTree*, $List*)},
	{"newProvidesTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/ProvidesTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ProvidesTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newProvidesTree, $ProvidesTree*, $ReferenceTree*, $List*)},
	{"newReferenceTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/ReferenceTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newReferenceTree, $ReferenceTree*, $String*)},
	{"newReturnTree", "(Ljava/util/List;)Lcom/sun/source/doctree/ReturnTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ReturnTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newReturnTree, $ReturnTree*, $List*)},
	{"newReturnTree", "(ZLjava/util/List;)Lcom/sun/source/doctree/ReturnTree;", "(ZLjava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ReturnTree;", $PUBLIC, $virtualMethod(DocTreeFactory, newReturnTree, $ReturnTree*, bool, $List*)},
	{"newSeeTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SeeTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SeeTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newSeeTree, $SeeTree*, $List*)},
	{"newSerialDataTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SerialDataTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SerialDataTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newSerialDataTree, $SerialDataTree*, $List*)},
	{"newSerialFieldTree", "(Lcom/sun/source/doctree/IdentifierTree;Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/SerialFieldTree;", "(Lcom/sun/source/doctree/IdentifierTree;Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SerialFieldTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newSerialFieldTree, $SerialFieldTree*, $IdentifierTree*, $ReferenceTree*, $List*)},
	{"newSerialTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SerialTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SerialTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newSerialTree, $SerialTree*, $List*)},
	{"newSinceTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SinceTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SinceTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newSinceTree, $SinceTree*, $List*)},
	{"newStartElementTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;Z)Lcom/sun/source/doctree/StartElementTree;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;Z)Lcom/sun/source/doctree/StartElementTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newStartElementTree, $StartElementTree*, $Name*, $List*, bool)},
	{"newSummaryTree", "(Ljava/util/List;)Lcom/sun/source/doctree/SummaryTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/SummaryTree;", $PUBLIC, $virtualMethod(DocTreeFactory, newSummaryTree, $SummaryTree*, $List*)},
	{"newSystemPropertyTree", "(Ljavax/lang/model/element/Name;)Lcom/sun/source/doctree/SystemPropertyTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newSystemPropertyTree, $SystemPropertyTree*, $Name*)},
	{"newTextTree", "(Ljava/lang/String;)Lcom/sun/source/doctree/TextTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newTextTree, $TextTree*, $String*)},
	{"newThrowsTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/ThrowsTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/ThrowsTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newThrowsTree, $ThrowsTree*, $ReferenceTree*, $List*)},
	{"newUnknownBlockTagTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;)Lcom/sun/source/doctree/UnknownBlockTagTree;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/UnknownBlockTagTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newUnknownBlockTagTree, $UnknownBlockTagTree*, $Name*, $List*)},
	{"newUnknownInlineTagTree", "(Ljavax/lang/model/element/Name;Ljava/util/List;)Lcom/sun/source/doctree/UnknownInlineTagTree;", "(Ljavax/lang/model/element/Name;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/UnknownInlineTagTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newUnknownInlineTagTree, $UnknownInlineTagTree*, $Name*, $List*)},
	{"newUsesTree", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List;)Lcom/sun/source/doctree/UsesTree;", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/UsesTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newUsesTree, $UsesTree*, $ReferenceTree*, $List*)},
	{"newValueTree", "(Lcom/sun/source/doctree/ReferenceTree;)Lcom/sun/source/doctree/ValueTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newValueTree, $ValueTree*, $ReferenceTree*)},
	{"newVersionTree", "(Ljava/util/List;)Lcom/sun/source/doctree/VersionTree;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Lcom/sun/source/doctree/VersionTree;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTreeFactory, newVersionTree, $VersionTree*, $List*)},
	{}
};

$ClassInfo _DocTreeFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.util.DocTreeFactory",
	nullptr,
	nullptr,
	nullptr,
	_DocTreeFactory_MethodInfo_
};

$Object* allocate$DocTreeFactory($Class* clazz) {
	return $of($alloc(DocTreeFactory));
}

$ReturnTree* DocTreeFactory::newReturnTree(bool isInline, $List* description) {
	if (isInline) {
		$throwNew($UnsupportedOperationException);
	}
	return newReturnTree(description);
}

$SummaryTree* DocTreeFactory::newSummaryTree($List* summary) {
	$throwNew($UnsupportedOperationException, "not implemented"_s);
	$shouldNotReachHere();
}

$Class* DocTreeFactory::load$($String* name, bool initialize) {
	$loadClass(DocTreeFactory, name, initialize, &_DocTreeFactory_ClassInfo_, allocate$DocTreeFactory);
	return class$;
}

$Class* DocTreeFactory::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com