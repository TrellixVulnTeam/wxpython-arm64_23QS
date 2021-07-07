/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        #include <wx/imagpnm.h>

        #include <wx/stream.h>
        #include <wx/image.h>
        #include <wx/stream.h>
        #include <wx/object.h>
        #include <wx/object.h>
        #include <wx/object.h>


class sipwxPNMHandler : public  ::wxPNMHandler
{
public:
    sipwxPNMHandler();
    virtual ~sipwxPNMHandler();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtectVirt_DoGetImageCount(bool, ::wxInputStream&);
    bool sipProtectVirt_DoCanRead(bool, ::wxInputStream&);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool LoadFile( ::wxImage*, ::wxInputStream&,bool,int) SIP_OVERRIDE;
    bool SaveFile( ::wxImage*, ::wxOutputStream&,bool) SIP_OVERRIDE;
    int DoGetImageCount( ::wxInputStream&) SIP_OVERRIDE;
    bool DoCanRead( ::wxInputStream&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxPNMHandler(const sipwxPNMHandler &);
    sipwxPNMHandler &operator = (const sipwxPNMHandler &);

    char sipPyMethods[4];
};

sipwxPNMHandler::sipwxPNMHandler():  ::wxPNMHandler(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxPNMHandler::~sipwxPNMHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipwxPNMHandler::LoadFile( ::wxImage*image, ::wxInputStream& stream,bool verbose,int index)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_LoadFile);

    if (!sipMeth)
        return  ::wxPNMHandler::LoadFile(image,stream,verbose,index);

    extern bool sipVH__core_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxImage*, ::wxInputStream&,bool,int);

    return sipVH__core_21(sipGILState, 0, sipPySelf, sipMeth, image, stream, verbose, index);
}

bool sipwxPNMHandler::SaveFile( ::wxImage*image, ::wxOutputStream& stream,bool verbose)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_SaveFile);

    if (!sipMeth)
        return  ::wxPNMHandler::SaveFile(image,stream,verbose);

    extern bool sipVH__core_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxImage*, ::wxOutputStream&,bool);

    return sipVH__core_22(sipGILState, 0, sipPySelf, sipMeth, image, stream, verbose);
}

int sipwxPNMHandler::DoGetImageCount( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_DoGetImageCount);

    if (!sipMeth)
        return  ::wxPNMHandler::DoGetImageCount(stream);

    extern int sipVH__core_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__core_23(sipGILState, 0, sipPySelf, sipMeth, stream);
}

bool sipwxPNMHandler::DoCanRead( ::wxInputStream& stream)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_DoCanRead);

    if (!sipMeth)
        return  ::wxPNMHandler::DoCanRead(stream);

    extern bool sipVH__core_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::wxInputStream&);

    return sipVH__core_24(sipGILState, 0, sipPySelf, sipMeth, stream);
}

int sipwxPNMHandler::sipProtectVirt_DoGetImageCount(bool sipSelfWasArg, ::wxInputStream& stream)
{
    return (sipSelfWasArg ?  ::wxImageHandler::DoGetImageCount(stream) : DoGetImageCount(stream));
}

bool sipwxPNMHandler::sipProtectVirt_DoCanRead(bool sipSelfWasArg, ::wxInputStream& stream)
{
    return (sipSelfWasArg ?  ::wxPNMHandler::DoCanRead(stream) : DoCanRead(stream));
}


PyDoc_STRVAR(doc_wxPNMHandler_DoGetImageCount, "DoGetImageCount(stream) -> int\n"
"\n"
"Called to get the number of images available in a multi-image file\n"
"type, if supported.");

extern "C" {static PyObject *meth_wxPNMHandler_DoGetImageCount(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPNMHandler_DoGetImageCount(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxInputStream* stream;
        int streamState = 0;
        sipwxPNMHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPNMHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            int sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_DoGetImageCount(sipSelfWasArg,*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PNMHandler, sipName_DoGetImageCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPNMHandler_LoadFile, "LoadFile(image, stream, verbose=True, index=-1) -> bool\n"
"\n"
"Loads an image from a stream, putting the resulting data into image.");

extern "C" {static PyObject *meth_wxPNMHandler_LoadFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPNMHandler_LoadFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxImage* image;
         ::wxInputStream* stream;
        int streamState = 0;
        bool verbose = 1;
        int index = -1;
         ::wxPNMHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_stream,
            sipName_verbose,
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1|bi", &sipSelf, sipType_wxPNMHandler, &sipCpp, sipType_wxImage, &image, sipType_wxInputStream, &stream, &streamState, &verbose, &index))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPNMHandler::LoadFile(image,*stream,verbose,index) : sipCpp->LoadFile(image,*stream,verbose,index));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PNMHandler, sipName_LoadFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPNMHandler_SaveFile, "SaveFile(image, stream, verbose=True) -> bool\n"
"\n"
"Saves an image in the output stream.");

extern "C" {static PyObject *meth_wxPNMHandler_SaveFile(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPNMHandler_SaveFile(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxImage* image;
         ::wxOutputStream* stream;
        int streamState = 0;
        bool verbose = 1;
         ::wxPNMHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_image,
            sipName_stream,
            sipName_verbose,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ8J1|b", &sipSelf, sipType_wxPNMHandler, &sipCpp, sipType_wxImage, &image, sipType_wxOutputStream, &stream, &streamState, &verbose))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::wxPNMHandler::SaveFile(image,*stream,verbose) : sipCpp->SaveFile(image,*stream,verbose));
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxOutputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PNMHandler, sipName_SaveFile, SIP_NULLPTR);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_wxPNMHandler_DoCanRead, "DoCanRead(stream) -> bool\n"
"\n"
"Called to test if this handler can read an image from the given\n"
"stream.");

extern "C" {static PyObject *meth_wxPNMHandler_DoCanRead(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_wxPNMHandler_DoCanRead(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::wxInputStream* stream;
        int streamState = 0;
        sipwxPNMHandler *sipCpp;

        static const char *sipKwdList[] = {
            sipName_stream,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "BJ1", &sipSelf, sipType_wxPNMHandler, &sipCpp, sipType_wxInputStream, &stream, &streamState))
        {
            bool sipRes;

            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_DoCanRead(sipSelfWasArg,*stream);
            Py_END_ALLOW_THREADS
            sipReleaseType(stream,sipType_wxInputStream,streamState);

            if (PyErr_Occurred())
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PNMHandler, sipName_DoCanRead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_wxPNMHandler(void *, const sipTypeDef *);}
static void *cast_wxPNMHandler(void *sipCppV, const sipTypeDef *targetType)
{
     ::wxPNMHandler *sipCpp = reinterpret_cast< ::wxPNMHandler *>(sipCppV);

    if (targetType == sipType_wxImageHandler)
        return static_cast< ::wxImageHandler *>(sipCpp);

    if (targetType == sipType_wxObject)
        return static_cast< ::wxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxPNMHandler(void *, int);}
static void release_wxPNMHandler(void *sipCppV, int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxPNMHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::wxPNMHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxPNMHandler(sipSimpleWrapper *);}
static void dealloc_wxPNMHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipwxPNMHandler *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxPNMHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_wxPNMHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_wxPNMHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxPNMHandler *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            PyErr_Clear();

            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipwxPNMHandler();
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

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxPNMHandler[] = {{265, 255, 1}};


static PyMethodDef methods_wxPNMHandler[] = {
    {SIP_MLNAME_CAST(sipName_DoCanRead), SIP_MLMETH_CAST(meth_wxPNMHandler_DoCanRead), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPNMHandler_DoCanRead)},
    {SIP_MLNAME_CAST(sipName_DoGetImageCount), SIP_MLMETH_CAST(meth_wxPNMHandler_DoGetImageCount), METH_VARARGS|METH_KEYWORDS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_LoadFile), SIP_MLMETH_CAST(meth_wxPNMHandler_LoadFile), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPNMHandler_LoadFile)},
    {SIP_MLNAME_CAST(sipName_SaveFile), SIP_MLMETH_CAST(meth_wxPNMHandler_SaveFile), METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_wxPNMHandler_SaveFile)}
};

PyDoc_STRVAR(doc_wxPNMHandler, "PNMHandler()\n"
"\n"
"This is the image handler for the PNM format.");


sipClassTypeDef sipTypeDef__core_wxPNMHandler = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_wxPNMHandler,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_PNMHandler,
        {0, 0, 1},
        4, methods_wxPNMHandler,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_wxPNMHandler,
    -1,
    -1,
    supers_wxPNMHandler,
    SIP_NULLPTR,
    init_type_wxPNMHandler,
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
    dealloc_wxPNMHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxPNMHandler,
    cast_wxPNMHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};