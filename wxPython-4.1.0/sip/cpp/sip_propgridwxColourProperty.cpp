/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"

        #include <wx/propgrid/advprops.h>

        #include <wx/colour.h>
        #include <wx/propgrid/advprops.h>
        #include <wx/dc.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/property.h>
        #include <wx/gdicmn.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/propgrid/propgrid.h>
        #include <wx/propgrid/property.h>
        #include <wx/bitmap.h>
        #include <wx/validate.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/property.h>
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/editors.h>
        #include <wx/propgrid/property.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxColourProperty : public  ::wxColourProperty
{
public:
    sipwxColourProperty(const  ::wxString&,const  ::wxString&,const  ::wxColour&);
    sipwxColourProperty(const  ::wxColourProperty&);
    virtual ~sipwxColourProperty();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int GetIndexForValue(int) const SIP_OVERRIDE;
    void OnSetValue() SIP_OVERRIDE;
     ::wxPGVariant DoGetValue() const SIP_OVERRIDE;
    bool ValidateValue( ::wxPGVariant&, ::wxPGValidationInfo&) const SIP_OVERRIDE;
    bool StringToValue( ::wxPGVariant&,const  ::wxString&,int) const SIP_OVERRIDE;
    bool IntToValue( ::wxPGVariant&,int,int) const SIP_OVERRIDE;
     ::wxString ValueToString( ::wxPGVariant&,int) const SIP_OVERRIDE;
     ::wxSize OnMeasureImage(int) const SIP_OVERRIDE;
    bool OnEvent( ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&) SIP_OVERRIDE;
     ::wxPGVariant ChildChanged( ::wxPGVariant&,int, ::wxPGVariant&) const SIP_OVERRIDE;
    const  ::wxPGEditor* DoGetEditorClass() const SIP_OVERRIDE;
     ::wxValidator* DoGetValidator() const SIP_OVERRIDE;
    void OnCustomPaint( ::wxDC&,const  ::wxRect&, ::wxPGPaintData&) SIP_OVERRIDE;
     ::wxPGCellRenderer* GetCellRenderer(int) const SIP_OVERRIDE;
    int GetChoiceSelection() const SIP_OVERRIDE;
    void RefreshChildren() SIP_OVERRIDE;
    bool DoSetAttribute(const  ::wxString&, ::wxPGVariant&) SIP_OVERRIDE;
     ::wxPGVariant DoGetAttribute(const  ::wxString&) const SIP_OVERRIDE;
     ::wxPGEditorDialogAdapter* GetEditorDialog() const SIP_OVERRIDE;
    void OnValidationFailure( ::wxPGVariant&) SIP_OVERRIDE;
     ::wxString GetValueAsString(int) const SIP_OVERRIDE;
     ::wxString ColourToString(const  ::wxColour&,int,int) const SIP_OVERRIDE;
    int GetCustomColourIndex() const SIP_OVERRIDE;
     ::wxColour GetColour(int) const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxColourProperty(const sipwxColourProperty &);
    sipwxColourProperty &operator = (const sipwxColourProperty &);

    char sipPyMethods[24];
};

sipwxColourProperty::sipwxColourProperty(const  ::wxString& label,const  ::wxString& name,const  ::wxColour& value):  ::wxColourProperty(label,name,value), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxColourProperty::sipwxColourProperty(const  ::wxColourProperty& a0):  ::wxColourProperty(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxColourProperty::~sipwxColourProperty()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

int sipwxColourProperty::GetIndexForValue(int value) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetIndexForValue);

    if (!sipMeth)
        return  ::wxColourProperty::GetIndexForValue(value);

    extern int sipVH__propgrid_67(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_67(sipGILState, 0, sipPySelf, sipMeth, value);
}

void sipwxColourProperty::OnSetValue()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_OnSetValue);

    if (!sipMeth)
    {
         ::wxColourProperty::OnSetValue();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxPGVariant sipwxColourProperty::DoGetValue() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,SIP_NULLPTR,sipName_DoGetValue);

    if (!sipMeth)
        return  ::wxColourProperty::DoGetValue();

    extern  ::wxPGVariant sipVH__propgrid_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_4(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxColourProperty::ValidateValue( ::wxPGVariant& value, ::wxPGValidationInfo& validationInfo) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,SIP_NULLPTR,sipName_ValidateValue);

    if (!sipMeth)
        return  ::wxColourProperty::ValidateValue(value,validationInfo);

    extern bool sipVH__propgrid_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&, ::wxPGValidationInfo&);

    return sipVH__propgrid_5(sipGILState, 0, sipPySelf, sipMeth, value, validationInfo);
}

bool sipwxColourProperty::StringToValue( ::wxPGVariant& variant,const  ::wxString& text,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,SIP_NULLPTR,sipName_StringToValue);

    if (!sipMeth)
        return  ::wxColourProperty::StringToValue(variant,text,argFlags);

    extern bool sipVH__propgrid_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,const  ::wxString&,int);

    return sipVH__propgrid_6(sipGILState, 0, sipPySelf, sipMeth, variant, text, argFlags);
}

bool sipwxColourProperty::IntToValue( ::wxPGVariant& variant,int number,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,SIP_NULLPTR,sipName_IntToValue);

    if (!sipMeth)
        return  ::wxColourProperty::IntToValue(variant,number,argFlags);

    extern bool sipVH__propgrid_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int,int);

    return sipVH__propgrid_7(sipGILState, 0, sipPySelf, sipMeth, variant, number, argFlags);
}

 ::wxString sipwxColourProperty::ValueToString( ::wxPGVariant& value,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,SIP_NULLPTR,sipName_ValueToString);

    if (!sipMeth)
        return  ::wxColourProperty::ValueToString(value,argFlags);

    extern  ::wxString sipVH__propgrid_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int);

    return sipVH__propgrid_8(sipGILState, 0, sipPySelf, sipMeth, value, argFlags);
}

 ::wxSize sipwxColourProperty::OnMeasureImage(int item) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,SIP_NULLPTR,sipName_OnMeasureImage);

    if (!sipMeth)
        return  ::wxColourProperty::OnMeasureImage(item);

    extern  ::wxSize sipVH__propgrid_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_9(sipGILState, 0, sipPySelf, sipMeth, item);
}

bool sipwxColourProperty::OnEvent( ::wxPropertyGrid*propgrid, ::wxWindow*wnd_primary, ::wxEvent& event)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,SIP_NULLPTR,sipName_OnEvent);

    if (!sipMeth)
        return  ::wxColourProperty::OnEvent(propgrid,wnd_primary,event);

    extern bool sipVH__propgrid_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPropertyGrid*, ::wxWindow*, ::wxEvent&);

    return sipVH__propgrid_10(sipGILState, 0, sipPySelf, sipMeth, propgrid, wnd_primary, event);
}

 ::wxPGVariant sipwxColourProperty::ChildChanged( ::wxPGVariant& thisValue,int childIndex, ::wxPGVariant& childValue) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,SIP_NULLPTR,sipName_ChildChanged);

    if (!sipMeth)
        return  ::wxColourProperty::ChildChanged(thisValue,childIndex,childValue);

    extern  ::wxPGVariant sipVH__propgrid_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&,int, ::wxPGVariant&);

    return sipVH__propgrid_11(sipGILState, 0, sipPySelf, sipMeth, thisValue, childIndex, childValue);
}

const  ::wxPGEditor* sipwxColourProperty::DoGetEditorClass() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,SIP_NULLPTR,sipName_DoGetEditorClass);

    if (!sipMeth)
        return  ::wxColourProperty::DoGetEditorClass();

    extern const  ::wxPGEditor* sipVH__propgrid_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_12(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxValidator* sipwxColourProperty::DoGetValidator() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,SIP_NULLPTR,sipName_DoGetValidator);

    if (!sipMeth)
        return  ::wxColourProperty::DoGetValidator();

    extern  ::wxValidator* sipVH__propgrid_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_13(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxColourProperty::OnCustomPaint( ::wxDC& dc,const  ::wxRect& rect, ::wxPGPaintData& paintdata)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,SIP_NULLPTR,sipName_OnCustomPaint);

    if (!sipMeth)
    {
         ::wxColourProperty::OnCustomPaint(dc,rect,paintdata);
        return;
    }

    extern void sipVH__propgrid_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxDC&,const  ::wxRect&, ::wxPGPaintData&);

    sipVH__propgrid_14(sipGILState, 0, sipPySelf, sipMeth, dc, rect, paintdata);
}

 ::wxPGCellRenderer* sipwxColourProperty::GetCellRenderer(int column) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,SIP_NULLPTR,sipName_GetCellRenderer);

    if (!sipMeth)
        return  ::wxColourProperty::GetCellRenderer(column);

    extern  ::wxPGCellRenderer* sipVH__propgrid_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_15(sipGILState, 0, sipPySelf, sipMeth, column);
}

int sipwxColourProperty::GetChoiceSelection() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,SIP_NULLPTR,sipName_GetChoiceSelection);

    if (!sipMeth)
        return  ::wxColourProperty::GetChoiceSelection();

    extern int sipVH__propgrid_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_16(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxColourProperty::RefreshChildren()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,SIP_NULLPTR,sipName_RefreshChildren);

    if (!sipMeth)
    {
         ::wxColourProperty::RefreshChildren();
        return;
    }

    extern void sipVH__propgrid_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH__propgrid_3(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipwxColourProperty::DoSetAttribute(const  ::wxString& name, ::wxPGVariant& value)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,SIP_NULLPTR,sipName_DoSetAttribute);

    if (!sipMeth)
        return  ::wxColourProperty::DoSetAttribute(name,value);

    extern bool sipVH__propgrid_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&, ::wxPGVariant&);

    return sipVH__propgrid_17(sipGILState, 0, sipPySelf, sipMeth, name, value);
}

 ::wxPGVariant sipwxColourProperty::DoGetAttribute(const  ::wxString& name) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,SIP_NULLPTR,sipName_DoGetAttribute);

    if (!sipMeth)
        return  ::wxColourProperty::DoGetAttribute(name);

    extern  ::wxPGVariant sipVH__propgrid_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxString&);

    return sipVH__propgrid_18(sipGILState, 0, sipPySelf, sipMeth, name);
}

 ::wxPGEditorDialogAdapter* sipwxColourProperty::GetEditorDialog() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[18]),sipPySelf,SIP_NULLPTR,sipName_GetEditorDialog);

    if (!sipMeth)
        return  ::wxColourProperty::GetEditorDialog();

    extern  ::wxPGEditorDialogAdapter* sipVH__propgrid_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_19(sipGILState, 0, sipPySelf, sipMeth);
}

void sipwxColourProperty::OnValidationFailure( ::wxPGVariant& pendingValue)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,SIP_NULLPTR,sipName_OnValidationFailure);

    if (!sipMeth)
    {
         ::wxColourProperty::OnValidationFailure(pendingValue);
        return;
    }

    extern void sipVH__propgrid_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxPGVariant&);

    sipVH__propgrid_20(sipGILState, 0, sipPySelf, sipMeth, pendingValue);
}

 ::wxString sipwxColourProperty::GetValueAsString(int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,SIP_NULLPTR,sipName_GetValueAsString);

    if (!sipMeth)
        return  ::wxColourProperty::GetValueAsString(argFlags);

    extern  ::wxString sipVH__propgrid_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_21(sipGILState, 0, sipPySelf, sipMeth, argFlags);
}

 ::wxString sipwxColourProperty::ColourToString(const  ::wxColour& col,int index,int argFlags) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[21]),sipPySelf,SIP_NULLPTR,sipName_ColourToString);

    if (!sipMeth)
        return  ::wxColourProperty::ColourToString(col,index,argFlags);

    extern  ::wxString sipVH__propgrid_81(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::wxColour&,int,int);

    return sipVH__propgrid_81(sipGILState, 0, sipPySelf, sipMeth, col, index, argFlags);
}

int sipwxColourProperty::GetCustomColourIndex() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[22]),sipPySelf,SIP_NULLPTR,sipName_GetCustomColourIndex);

    if (!sipMeth)
        return  ::wxColourProperty::GetCustomColourIndex();

    extern int sipVH__propgrid_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__propgrid_16(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxColour sipwxColourProperty::GetColour(int index) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[23]),sipPySelf,SIP_NULLPTR,sipName_GetColour);

    if (!sipMeth)
        return  ::wxColourProperty::GetColour(index);

    extern  ::wxColour sipVH__propgrid_82(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH__propgrid_82(sipGILState, 0, sipPySelf, sipMeth, index);
}


PyDoc_STRVAR(doc_wxColourProperty_ValueToString, "ValueToString(value, argFlags=0) -> String\n"
"\n"
"Converts property value into a text representation.");

extern "C" {static PyObject *meth_wxColourProperty_ValueToString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxColourProperty_ValueToString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxPGVariant* value;
        int valueState = 0;
        int argFlags = 0;
        const  ::wxColourProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_value,
            sipName_argFlags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1|i", &sipSelf, sipType_wxColourProperty, &sipCpp, sipType_wxPGVariant,&value, &valueState, &argFlags))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString((sipSelfWasArg ? sipCpp-> ::wxColourProperty::ValueToString(*value,argFlags) : sipCpp->ValueToString(*value,argFlags)));
            Py_END_ALLOW_THREADS
            sipReleaseType(value,sipType_wxPGVariant,valueState);

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColourProperty, sipName_ValueToString, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxColourProperty_GetColour, "GetColour(index) -> wx.Colour\n"
"\n"
"Default is to use wxSystemSettings::GetColour(index).");

extern "C" {static PyObject *meth_wxColourProperty_GetColour(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxColourProperty_GetColour(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int index;
        const  ::wxColourProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "Bi", &sipSelf, sipType_wxColourProperty, &sipCpp, &index))
        {
             ::wxColour*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxColour((sipSelfWasArg ? sipCpp-> ::wxColourProperty::GetColour(index) : sipCpp->GetColour(index)));
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxColour,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColourProperty, sipName_GetColour, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxColourProperty(void *, const sipTypeDef *);}
static void *cast_wxColourProperty(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxColourProperty *sipCpp = reinterpret_cast< ::wxColourProperty *>(sipCppV);

    if (targetType == sipType_wxSystemColourProperty)
        return static_cast< ::wxSystemColourProperty *>(sipCpp);

    if (targetType == sipType_wxEnumProperty)
        return static_cast< ::wxEnumProperty *>(sipCpp);

    if (targetType == sipType_wxPGProperty)
        return static_cast< ::wxPGProperty *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxColourProperty(void *, int);}
static void release_wxColourProperty(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxColourProperty *>(sipCppV);
    else
        delete reinterpret_cast< ::wxColourProperty *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_wxColourProperty(void *, SIP_SSIZE_T, void *);}
static void assign_wxColourProperty(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxColourProperty *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxColourProperty *>(sipSrc);
}


extern "C" {static void *array_wxColourProperty(SIP_SSIZE_T);}
static void *array_wxColourProperty(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxColourProperty[sipNrElem];
}


extern "C" {static void *copy_wxColourProperty(const void *, SIP_SSIZE_T);}
static void *copy_wxColourProperty(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxColourProperty(reinterpret_cast<const  ::wxColourProperty *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_wxColourProperty(sipSimpleWrapper *);}
static void dealloc_wxColourProperty(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxColourProperty *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxColourProperty(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxColourProperty(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxColourProperty(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxColourProperty *sipCpp = SIP_NULLPTR;

    {
        const  ::wxString& labeldef = wxPG_LABEL;
        const  ::wxString* label = &labeldef;
        int labelState = 0;
        const  ::wxString& namedef = wxPG_LABEL;
        const  ::wxString* name = &namedef;
        int nameState = 0;
        const  ::wxColour& valuedef = *wxWHITE;
        const  ::wxColour* value = &valuedef;
        int valueState = 0;

        static const char *sipKwdList[] = {
            sipName_label,
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J1J1", sipType_wxString,&label, &labelState, sipType_wxString,&name, &nameState, sipType_wxColour, &value, &valueState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxColourProperty(*label,*name,*value);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(label),sipType_wxString,labelState);
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);
            sipReleaseType(const_cast< ::wxColour *>(value),sipType_wxColour,valueState);

            if (PyErr_Occurred())
            {
                delete sipCpp;
                return SIP_NULLPTR;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::wxColourProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxColourProperty, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxColourProperty(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxColourProperty[] = {{75, 255, 1}};


static PyMethodDef methods_wxColourProperty[] = {
    {SIP_MLNAME_CAST(sipName_GetColour), SIP_MLMETH_CAST(meth_wxColourProperty_GetColour), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxColourProperty_GetColour)},
    {SIP_MLNAME_CAST(sipName_ValueToString), SIP_MLMETH_CAST(meth_wxColourProperty_ValueToString), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxColourProperty_ValueToString)}
};

PyDoc_STRVAR(doc_wxColourProperty, "ColourProperty(label=PG_LABEL, name=PG_LABEL, value=wx.WHITE)\n"
"\n"
"Allows to select a colour from the list or with colour dialog.");


sipClassTypeDef sipTypeDef__propgrid_wxColourProperty = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxColourProperty,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_ColourProperty,
        {0, 0, 1},
        2, methods_wxColourProperty,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxColourProperty,
    -1,
    -1,
    supers_wxColourProperty,
    SIP_NULLPTR,
    init_type_wxColourProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxColourProperty,
    assign_wxColourProperty,
    array_wxColourProperty,
    copy_wxColourProperty,
    release_wxColourProperty,
    cast_wxColourProperty,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};