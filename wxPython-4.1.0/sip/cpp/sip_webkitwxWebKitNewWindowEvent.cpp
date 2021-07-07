/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_webkit.h"

        #include <wx/html/webkit.h>

        #include <wx/window.h>
        #include <wx/event.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxWebKitNewWindowEvent : public  ::wxWebKitNewWindowEvent
{
public:
    sipwxWebKitNewWindowEvent( ::wxWindow*);
    sipwxWebKitNewWindowEvent(const  ::wxWebKitNewWindowEvent&);
    virtual ~sipwxWebKitNewWindowEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::wxEventCategory GetEventCategory() const SIP_OVERRIDE;
     ::wxEvent* Clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxWebKitNewWindowEvent(const sipwxWebKitNewWindowEvent &);
    sipwxWebKitNewWindowEvent &operator = (const sipwxWebKitNewWindowEvent &);

    char sipPyMethods[2];
};

sipwxWebKitNewWindowEvent::sipwxWebKitNewWindowEvent( ::wxWindow*win):  ::wxWebKitNewWindowEvent(win), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWebKitNewWindowEvent::sipwxWebKitNewWindowEvent(const  ::wxWebKitNewWindowEvent& a0):  ::wxWebKitNewWindowEvent(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxWebKitNewWindowEvent::~sipwxWebKitNewWindowEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::wxEventCategory sipwxWebKitNewWindowEvent::GetEventCategory() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_GetEventCategory);

    if (!sipMeth)
        return  ::wxWebKitNewWindowEvent::GetEventCategory();

    extern  ::wxEventCategory sipVH__webkit_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__webkit_19(sipGILState, 0, sipPySelf, sipMeth);
}

 ::wxEvent* sipwxWebKitNewWindowEvent::Clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,SIP_NULLPTR,sipName_Clone);

    if (!sipMeth)
        return  ::wxWebKitNewWindowEvent::Clone();

    extern  ::wxEvent* sipVH__webkit_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH__webkit_18(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_wxWebKitNewWindowEvent_GetURL, "GetURL() -> String");

extern "C" {static PyObject *meth_wxWebKitNewWindowEvent_GetURL(PyObject *, PyObject *);}
static PyObject *meth_wxWebKitNewWindowEvent_GetURL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWebKitNewWindowEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebKitNewWindowEvent, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetURL());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitNewWindowEvent, sipName_GetURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitNewWindowEvent_SetURL, "SetURL(url)");

extern "C" {static PyObject *meth_wxWebKitNewWindowEvent_SetURL(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWebKitNewWindowEvent_SetURL(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* url;
        int urlState = 0;
         ::wxWebKitNewWindowEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_url,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxWebKitNewWindowEvent, &sipCpp, sipType_wxString,&url, &urlState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetURL(*url);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(url),sipType_wxString,urlState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitNewWindowEvent, sipName_SetURL, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitNewWindowEvent_GetTargetName, "GetTargetName() -> String");

extern "C" {static PyObject *meth_wxWebKitNewWindowEvent_GetTargetName(PyObject *, PyObject *);}
static PyObject *meth_wxWebKitNewWindowEvent_GetTargetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxWebKitNewWindowEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebKitNewWindowEvent, &sipCpp))
        {
             ::wxString*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::wxString(sipCpp->GetTargetName());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitNewWindowEvent, sipName_GetTargetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitNewWindowEvent_SetTargetName, "SetTargetName(name)");

extern "C" {static PyObject *meth_wxWebKitNewWindowEvent_SetTargetName(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxWebKitNewWindowEvent_SetTargetName(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::wxString* name;
        int nameState = 0;
         ::wxWebKitNewWindowEvent *sipCpp;

        static const char *sipKwdList[] = {
            sipName_name,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxWebKitNewWindowEvent, &sipCpp, sipType_wxString,&name, &nameState))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp->SetTargetName(*name);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast< ::wxString *>(name),sipType_wxString,nameState);

            if (PyErr_Occurred())
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitNewWindowEvent, sipName_SetTargetName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxWebKitNewWindowEvent_Clone, "Clone(self) -> Event");

extern "C" {static PyObject *meth_wxWebKitNewWindowEvent_Clone(PyObject *, PyObject *);}
static PyObject *meth_wxWebKitNewWindowEvent_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::wxWebKitNewWindowEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_wxWebKitNewWindowEvent, &sipCpp))
        {
             ::wxEvent*sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxWebKitNewWindowEvent::Clone() : sipCpp->Clone());
            Py_END_ALLOW_THREADS

            if (PyErr_Occurred())
                return 0;

            return sipConvertFromNewType(sipRes,sipType_wxEvent,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WebKitNewWindowEvent, sipName_Clone, doc_wxWebKitNewWindowEvent_Clone);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxWebKitNewWindowEvent(void *, const sipTypeDef *);}
static void *cast_wxWebKitNewWindowEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxWebKitNewWindowEvent *sipCpp = reinterpret_cast< ::wxWebKitNewWindowEvent *>(sipCppV);

    if (targetType == sipType_wxCommandEvent)
        return static_cast< ::wxCommandEvent *>(sipCpp);

    if (targetType == sipType_wxEvent)
        return static_cast< ::wxEvent *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxWebKitNewWindowEvent(void *, int);}
static void release_wxWebKitNewWindowEvent(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxWebKitNewWindowEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::wxWebKitNewWindowEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxWebKitNewWindowEvent(sipSimpleWrapper *);}
static void dealloc_wxWebKitNewWindowEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxWebKitNewWindowEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxWebKitNewWindowEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxWebKitNewWindowEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxWebKitNewWindowEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxWebKitNewWindowEvent *sipCpp = SIP_NULLPTR;

    {
         ::wxWindow* win = 0;

        static const char *sipKwdList[] = {
            sipName_win,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_wxWindow, &win))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWebKitNewWindowEvent(win);
            Py_END_ALLOW_THREADS

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
        const  ::wxWebKitNewWindowEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_wxWebKitNewWindowEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxWebKitNewWindowEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxWebKitNewWindowEvent[] = {{1, 0, 1}};


static PyMethodDef methods_wxWebKitNewWindowEvent[] = {
    {SIP_MLNAME_CAST(sipName_Clone), meth_wxWebKitNewWindowEvent_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebKitNewWindowEvent_Clone)},
    {SIP_MLNAME_CAST(sipName_GetTargetName), meth_wxWebKitNewWindowEvent_GetTargetName, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebKitNewWindowEvent_GetTargetName)},
    {SIP_MLNAME_CAST(sipName_GetURL), meth_wxWebKitNewWindowEvent_GetURL, METH_VARARGS, SIP_MLDOC_CAST(doc_wxWebKitNewWindowEvent_GetURL)},
    {SIP_MLNAME_CAST(sipName_SetTargetName), SIP_MLMETH_CAST(meth_wxWebKitNewWindowEvent_SetTargetName), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWebKitNewWindowEvent_SetTargetName)},
    {SIP_MLNAME_CAST(sipName_SetURL), SIP_MLMETH_CAST(meth_wxWebKitNewWindowEvent_SetURL), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxWebKitNewWindowEvent_SetURL)}
};

sipVariableDef variables_wxWebKitNewWindowEvent[] = {
    {PropertyVariable, sipName_URL, &methods_wxWebKitNewWindowEvent[2], &methods_wxWebKitNewWindowEvent[4], SIP_NULLPTR, SIP_NULLPTR},
    {PropertyVariable, sipName_TargetName, &methods_wxWebKitNewWindowEvent[1], &methods_wxWebKitNewWindowEvent[3], SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_wxWebKitNewWindowEvent, "WebKitNewWindowEvent(win=0)");


sipClassTypeDef sipTypeDef__webkit_wxWebKitNewWindowEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxWebKitNewWindowEvent,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_WebKitNewWindowEvent,
        {0, 0, 1},
        5, methods_wxWebKitNewWindowEvent,
        0, SIP_NULLPTR,
        2, variables_wxWebKitNewWindowEvent,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxWebKitNewWindowEvent,
    -1,
    -1,
    supers_wxWebKitNewWindowEvent,
    SIP_NULLPTR,
    init_type_wxWebKitNewWindowEvent,
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
    dealloc_wxWebKitNewWindowEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxWebKitNewWindowEvent,
    cast_wxWebKitNewWindowEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};