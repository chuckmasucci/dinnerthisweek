open ReasonReactApollo;
let cache = ApolloTypes.inMemoryCacheConfig(~resultCaching=true);
let client =
  ApolloTypes.createApolloClient(
    ApolloTypes.boostOptions(~uri="/graphql", ~cache, ()),
  );

open ApolloTypes;
Js.log(client);

[@react.component]
let make = () => {
  <Container fluid=true>
    <Row>
      <Col lg={Col.obj(Col.colObj(~offset=2, ()))}>
        <h1> {React.string("Hello!!!")} </h1>
        <p> {React.string("obj")} </p>
        <ApolloProvider client>
          <p> {React.string("obj2")} </p>
        </ApolloProvider>
      </Col>
    </Row>
  </Container>;
};
